#include <stdio.h>
int main(void){
    int x = 44;
    int a;


    if ( x ){
        a = x % 10;
        printf ("a = %d\n",a);
    }
    else {
        a = x;
        printf ("a = %d\n",a);
    }
return 0;
}

