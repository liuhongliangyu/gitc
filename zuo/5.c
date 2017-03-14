#include <stdio.h>
int main(void){
    int a,b,c;
    int max;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);


    max = (a > b) ? ((a > c)? a : c) : ((b > c)? b : c);
    printf ("max = %d\n",max);

    return 0;
}
