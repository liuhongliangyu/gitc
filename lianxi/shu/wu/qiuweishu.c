#include <stdio.h>
int main(void){//输入一个数，求出这个数有几位数。
  int i;
  printf("输入一个i值：");
  scanf("%d", &i);
  int sum = 0;
  if (i == 0){
    sum += 1;
  }
  while (i != 0){
    i = i / 10;
    sum = sum + 1;
  }
  printf("i有%d位\n", sum);

  return 0;
}
