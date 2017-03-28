#include <stdio.h>//编写程序实现数字反向输出。
int main(void){
  int i;
  int a = 0;
  printf("Enter a number: ");
  scanf ("%d",&i);
  printf ("i = %d\n",i);
  while (i != 0){
    a = a * 10 + i % 10;
    i = i /10;
    printf ("a = %d\n", a);
  }
  printf ("a = %d\n",a);
  return 0;
}
