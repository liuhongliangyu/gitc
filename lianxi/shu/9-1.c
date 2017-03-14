#include <stdio.h>
int main (void){
  int r;
  printf ("radii is: ");
  scanf ("%d",&r);
  float v = 4.0 / 3.0 * 3.14 * r * r * r;
  printf ("v = %.1f\n",v);
  return 0;
}
