#include <stdio.h>
int main(void){
  int a[6] = {1,2,3,1,1,4};
  int i, j, tmp;
  int b[6] = {0};

  for (i = 0; i < 6; i++){
    tmp = i;
    for (j = i + 1; j < 6; j++){
      if (a[tmp] == a[j]){
        b[j] = 1;
        b[tmp] = 1;
      }
    }
  }
  for (i = 0; i < 6; i++){
    if(b[i]){
      printf ("a[%d]\t",i);
    }
  }
  printf ("\n");
  return 0;
}
