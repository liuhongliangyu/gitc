#include <stdio.h>
int main (void){
  int a[6] = {43,54,52,26,2,15};
  int i, j,tmp;
  int h = i;
  for (i = 0; i < 6; i++){
    h = i;
    for (j = i + 1; j < 6; j++){
      if (a[h] < a[j]){
        h = j;
      }
      tmp = a[h];
      a[h] = a[i];
      a[i] = tmp;
    }
  }
  for (i = 0; i < 6; i++){
    printf ("%d\t",a[i]);
  }
  printf ("\n");
  return 0;
}
