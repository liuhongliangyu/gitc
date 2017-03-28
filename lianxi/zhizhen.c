#include <stdio.h>
int main(void){
  int a[10] = {1, 2, 3, 4, 5, 0, 98,786,6};
  int * p;
  int i;
  p = a;
  for (i = 0; i < 10; i++){
    printf ("a[%d] = %d\n",i, *p);
    p++;
  }
  return 0;
}
