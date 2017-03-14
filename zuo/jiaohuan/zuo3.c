#include <stdio.h>
int main(void){
  int a[6] = {2,3,554,6546,2,2,};
  int i,j,h,tmp;
  h = i;
  for (i = 0; i < 6; i++){
    h = i;
    for (j = i + 1 ; j < 6; j++){
      if (a[h] < a[j])
        h = j;
      if (a[h] != a[i]){
        tmp = a[h];
        a[h] = a[i];
        a[i] = tmp;
      }
    }
  }
  for (i = 0; i < 6; i++)
    printf ("%d\t",a[i]);
  printf ("\n");
  return 0;
}
