#include <stdio.h>
int main(int argc, char const *argv[]) {
  int grade[4][3] = {82, 77, 76, 90, 87, 56, 87, 48, 75, 86, 86, 66};
  int i, j;
  for (i = 0; i < 4; i++){
    for (j = 0; j < 3; j++){
      if (grade[i][j] < 60){
        printf("第grade[%d][%d]位学生不及格\n", i, j);
        continue;
      }
    }
  }
  return 0;
}
