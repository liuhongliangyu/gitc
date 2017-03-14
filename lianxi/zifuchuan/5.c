#include <stdio.h>
#include <string.h>
int main(int argc,const char *argv[]){
  char dest[64] = "hello";
  char src[32] = "world";
  strcat(dest, src);
  printf ("%s\n",dest);
  return 0;
}//拼接
