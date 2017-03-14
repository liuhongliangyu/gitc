#include <stdio.h>
int main(void){
    int a,b,c;
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);
    int min;

    min = (a > b) ? ((b > c) ? c : b) : ((a > c) ? c : a);
    printf ("min = %d\n",min);
    return 0;
}
