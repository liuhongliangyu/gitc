#include <stdio.h>
int main (void){
    int a = 42;
    int b = 30;
    int c = 10;

    int max = 0;

    max = ( a > b ) ? (( a > c ) ? a : c ) : (( b > c ) ? b :c );
    printf ("max = %d\n",max);
return 0;
}
