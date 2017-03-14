#include <stdio.h>
int main(void){
    int a,b,c,d,x;
    scanf ("%d",&x);
    a = x / 10000;
    b = x % 10000 / 1000;
    c = x % 100 / 10;
    d = x % 10;

    if (d == a && c == b){
        printf ("x is  a huiwen, x = %d\n",x);
    }
    else {
        printf ("x is not a huiwen\n");
    }

    return 0;
}
