#include <stdio.h>
int main (void){
  int a[6] = {12,34,13,15,432,4};
  int i;
  int sum = 0;
  for (i = 0; i < 6; i++){
    printf("%d\t",a[i]);
    sum = sum + a[i];
  }
  printf ("\n");
  printf ("sum = %d\n",sum);
  return 0;
}
