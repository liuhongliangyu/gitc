#include <stdio.h>
#include <string.h>
int main (int argc,const char *argv[]){
  char str[15] = "hello";
  int len = 0;

  len = strlen(str);
  printf ("strlen(str) = %d\n",len);

  printf ("sizeof(str) = %lu\n",sizeof(str));
  printf ("sizeof(str) = %lu\n",sizeof(len));
  return 0;
}//strlen 是计算字符串的实际大小（hello所占用的空间——5个）。sizeof是计算字符串的大小，即str[15]中给定的15个长度。len为4个字节。
