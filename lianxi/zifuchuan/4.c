#include <stdio.h>
#include <string.h>
int main(int argc,const char *argv[]){
  char dest[128];
  char src[128] = "This is a test";

  strcpy(dest,src);
  printf ("%s\n",dest);
  return 0;
}//字符串拷贝，将src里的字符串拷贝到dest内。但是[]里边的数值要大于所要拷贝的字节数，（就是有足够的空间）否则会造成数组越界！！！
