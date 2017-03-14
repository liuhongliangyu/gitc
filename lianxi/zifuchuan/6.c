#include <stdio.h>
#include <string.h>
int main (int argc,const char *argv[]){
  char str1[32] = "f";
  char str2[32] = "f";
  int ret;
  ret = strcmp(str1,str2);
  if (ret > 0){
    printf ("str1 > str2 ret = %d\n",ret);
  }
  else if (ret < 0){
    printf ("str1 < str2 ret = %d\n",ret);
  }
  else {
    printf ("str1 = str2 ret = %d\n",ret);
  }
  return 0;
}//比较输出字符串asccii的值的和大小，ret为asccii和相差的差值。
