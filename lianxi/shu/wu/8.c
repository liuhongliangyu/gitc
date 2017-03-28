#include <stdio.h>
int main(void){
  int n = -17;
  printf("%d\n", n >= 0 ? n : -n);
  return 0;
}
