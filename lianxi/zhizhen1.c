#include <stdio.h>
int main (void){
  int a[10] = {1, 2, 3, 4, 5, 6, 43, 54, 34, 65};
  char *p;
  p = a;
  int i;

  for (i = 0; i < 10; i++){
    printf ("a[%d] = %d\n",i, *p);
    p += 4;
  }

  return 0;
}
