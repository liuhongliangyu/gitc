#include <stdio.h>
int main (void){
  float a;
  printf ("Enter a dollar amount : ");
  scanf ("%f",&a);

  float b = a + a * 5 * 1 / 100;

  printf ("%.2f\n",b);
  return 0;
}
