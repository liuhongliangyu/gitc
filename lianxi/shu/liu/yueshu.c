#include <stdio.h>
int main(void){
  int x, y, i;
  int max = 2;
  scanf("%d%d", &x, &y);

  if (x % y == 0){
    printf("最大公约数为%d\n", y);
  }
  else if (y % x == 0){
    printf("最大公约数为%d\n", x);
  }
  else {
    for (i = 2; i < 10; i++){
      if ((x % i == 0) && (y % i == 0)){
        if (i >= max){
          max = i;

        }
      }
      else {
        printf("error\n");
        break;
      }
    }
    printf("最大公约数为%d\n", max);
  }
  return 0;
}
