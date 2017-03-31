#include <stdio.h>
int main(void){
  int n, d;
  printf("输入一个数： ");
  scanf("%d", &n);
  for (d = 2; d < n; d++){
      if (n % d == 0) break;
    if (d < n)
      printf("%d is divisible by %d\n", n, d);
    else
      printf("%d is prime\n", n);
  }
  return 0;
}
