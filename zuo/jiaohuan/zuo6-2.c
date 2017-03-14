#include <stdio.h>
int main(void){
  int a[6] = {1,2,3,3,5,1};
  int b[6] = {0};
  int i, j, tmp;

  for (i = 0; i < 6; i++){
    for (j = i + 1; j < 6; j++){
      if (a[j] == a[tmp]){
        b[j] = 1;
        b[tmp] = 1;
      }
    }
  }
  for (i = 1; i < 6; i++){
    tmp = i;
    for (j = i + 1; j < 6; j++){
      if (a[j] == a[tmp]){
        b[j] = 2;
        b[tmp] = 2;
      }
    }
  }
  for (i = 0; i < 6; i++){
    if (b[i] == 1){
      printf ("a[%d]\t",i);
    }
  }
  printf ("\n");
  for (i = 0; i < 6; i++){
    if (b[i] == 2){
      printf ("a[%d]\t",i);
    }
  }//一次单循环，只能找到两个相等！！
  printf ("\n");
  return 0;
}
