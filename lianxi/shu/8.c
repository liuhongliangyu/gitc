#include <stdio.h>
int main (void){
  int i;
  int j;
  int r;
  scanf ("%d",&r);
  for (i = r; i >= 0; i--){
    for (j = 0; j <= i + 1; j++){
      if (i + j == r - 3) {
        printf ("*");
      }
      else {
        printf (" ");
      }
    }
    printf ("*\n");
  }

  return 0;
}
