#include <stdio.h>
int main(void){
  int x;
  printf("输入风速：");
  scanf("%d", &x);

  if (x < 1){
    printf("Calm(无风)\n");
  }
  else if (x >= 1 && x <= 3){
    printf("Light air(轻风)\n");
  }
  else if(x >= 4 && x <= 27){
    printf("Breeze(微风)\n");
  }
  else if(x >= 28 && x <= 47){
    printf("Gale(大风)\n");
  }
  else if(x >= 48 && x <= 63){
    printf("Storm(暴风)\n");
  }
  else {
    printf("Hurricane(飓风)\n");
  }
  return 0;
}
