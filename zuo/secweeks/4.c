#include <stdio.h>
#include <string.h>
int main (void){
  float a = 1;
  int i;
  float sum = 0;
  for (i = 1; i <= 10; i++){
    if (i % 2 == 0){
      sum = sum - a / i;
    }
    else{
      sum = sum + a / i;
    }
  }
  printf ("sum = %f\n",sum);
}
