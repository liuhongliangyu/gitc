#include <stdio.h>
//佣金计算，最低收费39元，显示佣金数额。
int main(void){
  float a, b;
  printf ("Enter value of trade: ");
  scanf ("%f",&a);

  if(a < 2500){
    b = 30 + .017 * a;
  }
  else if (a < 6250){
    b = 56 + .0066 * a;
  }
  else if (a < 20000){
    b = 76 + .0034 * a;
  }
  else if (a < 50000){
    b = 100 + .0022 * a;
  }
  else if(a < 500000){
    b = 155 + .0011 * a;
  }
  else {
    b = 255 + .0009 * a;
  }
  if (b < 39){
    b = 39;
  }
  printf ("b = %.2f\n",b);
  return 0;
}
