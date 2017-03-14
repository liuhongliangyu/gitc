#include <stdio.h>
int main(void){
  int a[6] = {1,2,3,1,1,3};
  int i, j, tmp;
  int c;
  int b[6] = {0};

  for (i = 0; i < 6; i++){
    for (j = i + 1; j < 6; j++){
        for (c = j + 1; c < 6; c++){
          if (a[tmp] == a[j]){
            b[j] = 1;
            b[tmp] = 1;
          }
          else if (a[c] == a[j]){
            b[c] = 2;
            b[j] = 2;
          }
        }
    }
  }
  for (i = 0; i < 6; i++){
    if(b[i] == 1){
      printf ("a[%d]\t",i);
    //  printf ("\n");
    }
    if (b[i] == 2){
      printf("a[%d]\t",i);
    }
  }
  printf ("\n");
  return 0;
}
