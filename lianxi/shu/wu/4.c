#include <stdio.h>
int main (void){
  int a = 10,b = 5;
  int c = 2, d = 1;
  int e = 5, f = 5, g = -5;
  int i = 1, j = 2, k = 3;

  printf("%d\n", !a < b);
  printf("%d\n", !a);
  printf ("%d\n", !!c + !d);
  printf("%d\n", !!c);
  printf("%d\n", e && f || k);
  printf("%d++\n", e && f);
  printf("%d++\n", f || k);
  printf("%d\n", i < j || k);
  printf("%d\n", j || k);
  return 0;
}
