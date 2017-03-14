#include <stdio.h>
#define FREEZING_PT 32.0//华氏温度转换为摄氏温度。输出浮点型。
#define SCALE_FACTOR (5.0 / 9.0)

int main (void){
  float fahrenheit, celsius;
  printf ("Enter Fahrenheit temperature: ");
  scanf ("%f",&fahrenheit);

  celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

  printf ("Celsius equivalent: %.1f\n",celsius);

  return 0;
}
