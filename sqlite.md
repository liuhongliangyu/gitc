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

1. 文件存放位置：
  * sqlite> .database

1. 退出：
  * sqlite> .quit

1. 查看表：
  * sqlite> .tables

1. 显示表的结构：
  * sqlite> .schema
  
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

1. 删除表

    sqlite> drop table usr；

1. 插入数据：

    sqlite> insert into usr(id, name, age, salary) values(2, ‘liu’, 20, 6000);

1. 删除数据:
 
    sqlite> delete from usr where id = 2 and name = ‘lisi’；//删除一条记录

    sqlite> delete from usr where id = 2 or name = ‘lisi’；// and(与）or（或）

1. 修改数据：

    sqlite> update usr set gender = ‘man’，name = ‘lisi’ where id = 3;

1. 查询数据：

    sqlite> select * from usr where id = 2;

1. 修改表的名称

    sqlite> alter table oldname rename to newname;
## 参考文献
[](http://www.runoob.com/sqlite/sqlite-tutorial.html)
