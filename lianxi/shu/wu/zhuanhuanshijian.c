#include <stdio.h>
int main(void){//将24小时制时间转换为12小时制的格式。
  int x, y;
  printf("输入一个24小时制时间： ");
  scanf("%d:%d", &x, &y);
  if (y > 9){
    if (x >= 0 && x <= 12){
      printf("%d:%d AM\n",x, y);
    }
    else if (x >= 13 && x < 24){
      printf("%d:%d PM\n",x - 12, y);
    }
    else if (x == 24){
      printf("%d:%d\n", x - 24, y);
    }
  }
  else {
    if (x >= 0 && x <= 12){
      printf("%d:0%d AM\n",x, y);
    }
    else if (x >= 13 && x < 24){
      printf("%d:0%d PM\n",x - 12, y);
    }
    else if (x == 24){
      printf("%d:%d\n", x - 24, y);
    }
  }
  return 0;
}
