#include <stdio.h>
int main (void){
  int i, n, odd, square;
  printf("输入一个数：");
  scanf("%d", &n);
  i = 1;
  odd = 3;
  for (square = 1; i <= n; odd += 2){
    printf("%d%10d\n", i, square);
    ++i;
    square += odd;
  }
  return 0;
}
