#include <stdio.h>
int main (void){
  int a[6] = {23,24,242,2656,224,42};
  int i,k;
  int j = 0;

  for (i = 0; i < 5; i++){
      if (a[i] < a[i + 1]){
        k = a[j];
        a[j] = a[i + 1];
        a[i + 1] = k;
      }
      //printf("%d\n",a[i]);
  }
  printf ("%d\n",a[j]);
  return 0;
}
