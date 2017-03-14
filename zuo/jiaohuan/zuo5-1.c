#include <stdio.h>
int main(void){
  int i, j, n;
  scanf("%d",&n);
  int a[10][10] = {{1},{0}};
  for (i = 1; i < n + 1; i++){
    for(j = 1; j < n + 1; j++){
      a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
      if(a[i][j] == 0){
        continue;
      }
      printf ("%3d",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
