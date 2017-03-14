#include <stdio.h>
int main (void){
    int n,a,b,c,d;
    int i;

    for (n = 100; n < 1000;n++){
       a = n / 100;
       b = n / 10 % 10;
       c = n % 10;
       d = a * a * a + b * b * b + c * c * c;
       if (d == n){
           printf ("n = %d\n",n);

       }
    }
    return 0;
}
