#include <stdio.h>
int main(void){
  int a = 7, b = 8;
  a *= b + a;//==>a = a * (b + a)
  printf ("%d %d\n", a, b);

  int c = 1, d = 1, e = 1;
  c += d += e;//==>e = e, d = d + e,c = c + d.
  printf("%d %d %d\n", c, d, e);

  int f = 1, g = 2, i = 3;
  f -= g -= i;//i = i, g = g - i,f = f - g.
  printf ("%d %d %d\n", f, g, i);

  int j = 3, k = 2, l = 1;
  j *= k *= l;//l = l, k = k * l, j = j * k.
  printf ("%d %d %d\n", j, k, l);

  return 0;
}
