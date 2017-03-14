#include <stdio.h>
int main(void){
  int a[6] = {2,54,62,52,25,77};
  int i;

  for (i = 0; i < 6; i++){
    printf ("%d ",a[6 - 1 - i]);
  }
  printf ("\n");
  return 0;

}
