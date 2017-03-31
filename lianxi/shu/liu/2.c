#include <stdio.h>
int main(void){// 对输入的整数数列进行求和运算。
  int n;
  int sum = 0;
  printf("Enter integers (0 to ternunate): ");
  scanf("%d", &n);
  while (n != 0){
    sum += n;
    scanf("%d", &n);
  }
  printf("sum = %d\n", sum);
  return 0;
}
