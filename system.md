## system函数
```sh
示例代码
char *fgets(char *s, int size, FILE *stream)
功能： 就是执行一个命令。
比如：system("cp file newfile");完成拷贝。
```
表头文件： #include <stdlib.h>
### 练习使用system 
编写：mycp命令
  1. 获取命令行参数。$ ./mycp src obj
  1. 根据获取的命令行参数，进行拼接成字符串。
  1. 使用system函数执行拼接成的字符串命令。
  ```sh
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  int main (int argc, char * argv[]){
    char cmd[100] = "cp "; // 注意：cmd中是否带有"\0",如果没有，请添加，否则会出现段错误！！
    char c[] = " ";
    if (3 == argc){
        strcat (cmd, argv[1]);
        strcat (cmd, c);
        strcat (cmd, argv[2]);
        printf ("%s\n", cmd);
        system (cmd);
    }
    else {
        printf ("Error!!!\n");
    }
    return 0;
  } // 输出时要./a.out src obj     ./a.out 相当于 argc 1，src (源) 相当于 argc 2， obj (目标) 相当于argc 3。
  ```
  * 输入./a.out cmd.c xx.c ==> 输出 cp cmd.c xx.c，并且由于有system(cmd),所以系统自动执行cp cmd.c xx.c命令：把cmd.c拷贝到xx.c中，在当前目录中会多一个xx.c文件
  * 同理：可以用此程序编译”删除“、”移动“、”重命名“、”创建“、”查看“等等程序
