#include <stdio.h>
int main(void){
  int i, n;
  printf("输入一个值： ");
  scanf ("%d", &n);

  i = 1;
  while(i <= n){
    printf("%d%10d\n", i, i * i);
    i++;
  }
  return 0;
}
