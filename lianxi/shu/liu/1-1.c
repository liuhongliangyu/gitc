#include <stdio.h>
int main(void){
  int i, n;
  printf("输入一个数：");
  scanf("%d", &n);
  for (i = 1; i <= n; i++){
    printf("%d%10d\n", i, i * i);
  }
  return 0;
}
