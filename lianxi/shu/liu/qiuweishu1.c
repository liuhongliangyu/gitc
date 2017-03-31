#include <stdio.h>
int main(void){
  int sum = 0, i;
  printf("输入一个数：");//需要先判断i=0时， 这个数是几位，如果不判断，在while循环结束后输出 “这个数有0位”，当然while循环可以查出负数的位数。
  scanf("%d", &i);
  if (i == 0){
    printf("这个数有1位\n");
  }
  else {
    while(i != 0){
      i = i / 10;
      sum += 1;
    }
    printf("这个数有%d位\n", sum);
  }
  return 0;
}
