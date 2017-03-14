#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a < c){
        if (a > b){
            printf ("min == b = %d\n",b);
        }
        else {
            printf ("min == a = %d\n",a);
        }
    }
    else {
        if (c < b){
            printf ("min == c = %d\n",c);
        }
        else {
            printf ("min == b = %d\n",b);
        }
    }
    return 0;
}
