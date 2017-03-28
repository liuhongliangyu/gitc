#include <stdio.h>
int main(void){//n>=1,要么是真，值为1,要么是假，值为0,肯定小于10。
  int n;
  scanf("%d", &n);
  if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
  return 0;
}
