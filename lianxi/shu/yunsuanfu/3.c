#include <stdio.h>// 如果i和j都是正整数，是否(-i)/j的值和-(i/j)的值始终一样？？
int main (void){
  int i, j;
  printf ("Enter a number: ");
  scanf ("%d", &i);
  printf ("Enter a number: ");
  scanf ("%d", &j);

  if (i > 0 && j > 0){
    printf ("(-i) / j = %d\t-(i / j) = %d\n",(-i) / j, -(i / j));
  }
  else {
    printf ("ERROE!!!\n");
  }
  return 0;
}
