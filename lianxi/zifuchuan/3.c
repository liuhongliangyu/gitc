#include <stdio.h>
int main (void){
  size_t strlen(const char *s);
  char str[64] = "hello liu";
  int len = strlen(str);
  printf("strlen(str) = %d\n",len);
  return 0;
}//统计字符个数，不包含不可见'\0'字符。
