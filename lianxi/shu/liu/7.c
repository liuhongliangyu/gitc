#include <stdio.h>
int main(void){
  int sum = 0;
  int i;
  for (i = 0; i < 10; i++){
    if (i % 2) continue;//if (i % 2) 等价于 if (i % 2 != 0)
    sum += i;
    printf("%d\n", i);
  }
  printf("%d\n", sum);
  return 0;
}
