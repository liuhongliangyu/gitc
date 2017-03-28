#include <stdio.h>
int main(void){
  int x, a;
  printf("Enter a number: ");
  scanf("%d",&x);
  while (x != 0){
    a = x % 10;
    x = x / 10;
    printf ("a = %d\n",a);// 要放在循环内，每读取一个数字就打印一次，如果放在循环外，则只打印最后一次读取。
  }
  return 0;
}
