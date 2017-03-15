## fgets()函数
* 头文件：#include <stdio.h>
* 定义函数：cahr *fgets(char *s, int size, FILE * stream);
  * 函数说明：fgets()用来从参数stream所指的文件内读入字符并存到参数s所指的内存空间，直到出现换行符、读到文件尾或是已读了size-1个字符为止，最后会加上NULL作为字符串结束
 * 返回值：gets()若成功则返回s 指针, 返回NULL 则表示有错误发生.
 
 范例1
 ```sh
#include <stdio.h>
int main(){
    char s[80];  // s[80] 字符串的空间要足够大。
    fgets(s, 80, stdin), stdout;  int size 的值要够大，否则会出现不完整行，并且会对下次fgets的调用产生影响。
    printf ("%s",s);
}
//自己输入一行字符串，输出一行字符串
执行
this is a test //输入
this is a test //输出
 ```
 范例2
 ```sh
 #include <stdio.h>
 int main (void){
   char buf[200];
   while (fgets(buf, 200, stdin) != NULL){
     printf ("%s",buf);
   }
   return 0;
 }
// ./a.out < 文件名 ==>  输出该文件的内容。
 ```
