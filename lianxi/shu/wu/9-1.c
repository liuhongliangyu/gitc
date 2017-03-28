#include <stdio.h>
int main(void){
  int i, x, y;

  printf("输入学生成绩：");
  scanf("%d", &i);
  x = i / 10;
  if (i < 0 || i > 100){
    printf("error\n");
  }
  else {
    switch (x){
      case 10 : printf("A\n"); break;
      case 9 : printf("A\n"); break;
      case 8 : printf("B\n"); break;
      case 7 : printf("C\n"); break;
      case 6 : printf("D\n"); break;
      case 0: case 1 : case 2 : case 3 : case 4 : case 5 :
            printf("F\n"); break;
    }
  }
  return 0;
}
