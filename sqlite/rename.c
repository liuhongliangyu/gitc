#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){

  char buf[32];
  char direct[64] = "mv ";

  while (fgets(buf, 32, stdin) != NULL){//用while循环，用fgets函数在标准输入流中每次读取32个字节存入buf内，直到函数流为空为止。
    buf [strlen(buf) - 1] = '\0';//在buf数组中加入结束符。strlen(buf)-1：用'\0'替代'\n'。
    //printf ("%s\n",buf);在第32为上加一个‘\0’，因为buf定义是空。
    // 创造mv xxx yyy的形式，system(mv xxx yyy)重命名
    strcat(direct, buf);// 输出direct == mv filename ,mv + 文件名
    strcat(buf,"-1");//filename - 1
    strcat(direct, " ");
    strcat(direct, buf);//direct == mv filename filename - 1

    printf ("%s\n",direct);
    system(direct);//用system函数执行。
    
    strcpy(direct, "mv \0");//用strcpy对direct进行初始化，避免strcat在原有的字符串追加新的内容。
  }

  return 0;
}
