#include <stdio.h>
int main (void){
  int i;
  int n = 0;
  int sum = 0;

  while(n < 10){
    scanf("%d",&i);
  /*  if (i == 0) continue;
    sum += i;
    n++;
  */
    if (i != 0){
      sum += i;
      n++;
    }

  }
  printf("%d  %d  %d\n", n, i, sum);
  return 0;
}
