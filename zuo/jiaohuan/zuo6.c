#include <stdio.h>
int main (void){
  int a[6] = {1,1,3,1,4,5};
  int i, j, h;
  for (i = 0; i < 6; i++){
    for (j = i + 1; j < 6; j++){
      if (a[h] == a[j]){
        h = j;
        printf("a[%d]\t",i);
        printf("a[%d]\t",h);
      }
    }
  }
  return 0;
}
