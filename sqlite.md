## sqlite知识
1. sqlite是什么？
    * sqlite，是一款轻型的数据库，是遵守ACID的关系型数据库管理系统，它包含在一个相对小的C库中。它的设计目标是嵌入式的，而且目前已经在很多嵌入式产品中使用了它，它占用资源非常的低，在嵌入式设备中，可能只需要几百K的内存就够了。
1. sqlite安装
   ```sh
    $ sudo apt-get install sqlite3
   ```
1. 在ubuntu的命令行中使用sqlite的命令进行数据库操作
    * 数据库文件：sqlite中是以一个独立的文件存在，所有的数据都存储在该文件中 (sqlite3 数据库名称)
    * 数据库表格：属于数据库文件中的一部分，表格是用于存储具体的数据
        * (数据库文件 > 数据库表格 > 具体数据)
        
## sqlite基本命令

1. 建数据库：
 * sqlite3 test.db //注意sqlite的版本

1. 查看帮助：
 * sqlite> .help

1. 显示当前打开的数据库文件：
  * sqlite> .database

1. 退出：
  * sqlite> .quit

1. 显示数据库中所有表名：
  * sqlite> .tables

1. 显示表的结构：
  * sqlite> .schema
 * 注意：这些命令都是以“.”开头的。 
## 安装sqlite的C语言库
```sh
1. sudo apt-get update
2. sudo apt-get install  libsqlite3-dev
检查是否安装成功： cd  /usr/include 中查看是否有sqlite3.h文件
```
## sqlite3常见语句

1. 创建表：

    sqlite> create table usr(id integer primary key, name text, age integer null, gender text,
    salary real not null);
    //sqlite>create table <table_name> (f1 type1, f2 type2, ...);如：create table usr(id, name, age);
    
    
1. 删除表

    sqlite> drop table usr；

1. 插入数据：

    sqlite> insert into usr(id, name, age, salary) values(2, ‘liu’, 20, 6000);
    //sqlite> insert into <table_name> values (value1,value2,...);
    * 注意：字符串要用单引号括起来。
    
1. 删除数据:
 
    sqlite> delete from usr where id = 2 and name = ‘lisi’；//删除一条记录

    sqlite> delete from usr where id = 2 or name = ‘lisi’；// and(与）or（或）

1. 修改数据：

    sqlite> update usr set gender = ‘man’，name = ‘lisi’ where id = 3;

1. 查询数据：

    sqlite> select * from <table_name>;
    sqlite> select * from usr where id = 2;

1. 修改表的名称

    sqlite> alter table oldname rename to newname;
    
## sqlite3 的C语言接口的基本使用

   sqlite里最常用到的是sqlite3 *类型。从数据库打开开始，sqlite就要为这个类型准备好内存，直到数据库关闭，整个过程都需要用到这个类型。当数据库打开时  开始，这个类型的变量就代表了你要操作的数据库，即句柄。

   ```sh
   注意：使用sqlite3库进行代码的编译时，必须添加 -lsqlite3参数。
   比如：gcc xxxx.c -lsqlite3
   ```
1. 打开或者创建数据库：
    ```sh
   int sqlite3_open(char *path, sqlite3 **db);
   path:数据库文件路径（如果不存在，则创建）
   db:指向sqlite句柄的指针；
   成功返回0；
   失败返回错误吗；
   ```
   * 注意：只要打开数据库，结束后就要关闭！！！
 
1. 关闭sqlite数据库
   ```sh
   int sqlite_close(sqlite3 * db);
   ```
1. 返回值：返回错误信息。
   ```sh
   const char *sqlite3_errmsg(sqlite3 *db);
   ```
1. 执行一条sql语句
      typedef  int (*sqlite3_callback)(void *,int ,char **,char **);
      int  sqlite3_exec
      (
         sqlite3   *db ,  
         const  char *sql , 
         sqlite3_callback  callback   ,
         void  *arg,char  **errmsg 
      );

      * 第一个参数是前面sqlite3_open函数得到的指针。

      * 第二个参数const  char   *sql是一条sql语句，以\0结尾。

      * 第三个参数callbak是回调，当这条语句执行之后,sqlite3会去调用你提供的这个函数。

      * 第四个参数void *是你提供的指针，你可以传递任何一个指针参数到这里，这个参数最终会传到回调函数里面，如果不需要传递指针给回调函数，可以填NULL。

      * 第5个参数char  **errmsg是错误信息。注意是指针的指针。sqlite3里面有很多固定的错误信息。执行sqlite3_exec之后，执行失败是可以查阅这个指针;
   例如:
   char *errmsg;
   调用sqlite3_exec,失败后printf("%s\n",errmsg)得到一串字符串信息，这串信息高诉你错在什么地方。sqlite3_exec函数通过修改你传入的指针的指针，把你提供的指针指向错误提示信息，这样sqlite3_exec函数外面就可以通过这个char *errmsg得到具体错误提示

      * 说明:通常,sqlite3_callback和它后面的void *这两个位置都可以填NULL。填NULL表示你不需要回调。比如你做insert操作，做delete操作，就没有必要使用回调。而当你做select时，就要使用回调，因为sqlite3把数据查出来，得通过回调告诉你查出了什么数据。
      * 返回值：成功返回0，失败返回错误码。
1. exec的回调

  typedef  int (*sqlite3_callback)(void  *para,int n_column,char **column_value,char **column_name);
  
  * 通过para参数，你可以传入一些特殊的指针(比如类指针、结构指针)，然后在这里面强制转换成对应的类型(这里面是void  *类型,必须强制转换成你的类型才可用)。然后操作这些数据。
  
  * n_column是这一条记录有多少个字段(即这条记录有多少列)。

  * char  **column_value是个关键值，查出来的数据都保存在这里，它实际上可以看做是一个一维的指针数组，每个元素都是一个char *值，是一个字段的内容(用字符串来表示，以\0结尾)。

  * char  **column_nam 跟column_value是对应的，表示这个字段的字段名称 。


 
## 参考文献
   [SQLlite教程](http://www.runoob.com/sqlite/sqlite-tutorial.html)
   
   [sqlite3的基本操作](http://blog.csdn.net/witsmakemen/article/details/19826961)
  
