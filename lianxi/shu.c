#include <stdio.h>
int main (void){
    int x = 10;
    int a,b,c,d;
    int sum = 1;



    a = x / 10;
    b = a / 10;
    c = b / 10;
    d = c / 10;

    if ( x ){
        if ( a ){
            a = x % 10;
            printf ("a = %d\n",a);
        }
        else {
            printf ("a = %d\n",a);
        }
        if ( b ){
            b = a % 10;

            printf ("b = %d\n",b);
        }
        else {
            printf ("b = %d\n",b);
        }
        if ( c ){
            c = b % 10;
            printf ("c = %d\n",c);
        }
        else {
            printf ("c = %d\n",c);
        }
        if ( d ){
            d = c % 10;
            printf ("d = %d\n",d);
        }


    }
    else {
        printf ("a = %d\n",a);
    }
    printf ("sum = %d\n",sum);

return 0;
}
