#include <stdio.h>
int main(void){
  int i;
  int sum = 0;
  printf("输入一个数：");
  scanf("%d", &i);
  do {
    i = i / 10;
    sum = sum + 1;
  }while(i > 0);
    printf("这个数有%d位\n", sum);//如果i=0,则可以输出“这个数有1位”，如果i为负数，则会输出“这个数有1位（不管负数有几位）”
  return 0;
}
