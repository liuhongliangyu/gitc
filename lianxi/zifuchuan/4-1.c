#include <stdio.h>
#include <string.h>
int main (int argc, const char *argv[]){
  char dest[64];
  char src[32] = "hello";

  strcpy(dest,src);
  printf ("%s\n",dest);
  return 0;
}//输入#include <string.h>，要不然会有警告！
