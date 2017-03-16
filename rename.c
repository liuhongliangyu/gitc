#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){

  char buf[32];
  char direct[64] = "mv ";

  while (fgets(buf, 32, stdin) != NULL){
    buf [strlen(buf) - 1] = '\0';
    //printf ("%s\n",buf);在第32为上加一个‘\0’，因为buf定义是空。
    // 创造mv xxx yyy的形式，system(mv xxx yyy)重命名
    strcat(direct, buf);// 输出direct == mv filename ,mv + 文件名
    strcat(buf,"-1");//filename - 1
    strcat(direct, " ");
    strcat(direct, buf);//direct == mv filename filename - 1

    printf ("%s\n",direct);
    system(direct);

    strcpy(direct, "mv \0");
  }

  return 0;
}
