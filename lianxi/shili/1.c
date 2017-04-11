#include <stdio.h>
int main (void){
  int a[8] = {80, 90, 85, 84, 70, 76, 75, 83};
  int i, max = 0, min = 100;

  for (i = 0; i < 8; i++){
    if (a[i] > max){
      max = a[i];
    }
    else if (a[i] < min){
      min = a[i];
    }
  }
  printf("最高分为：%d 最低分为：%d\n", max, min);
}
