#include <stdio.h>
int main(void){
  int i = 5, j = 3;
  printf ("%d\t%d\n", i / j, i % j);

  int a = 2, b = 3;
  printf ("%d\n",(a + 10) % b);

  int c = 7, d = 8, e = 9;
  printf ("%d\n",(c + 10) % d / e);

  int f = 1, g = 2, k = 3;
  printf ("%d\n",(f + 5) % (g + 2) / k);
  return 0;
}
