#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a > b){
        if(a > c){
            printf("a = %d\n",a);
        }
        else{
            printf("c = %d\n",c);
        }
    }
    else{
        if (b > c){
            printf ("b = %d\n",b);
        }
        else{
            printf("c = %d\n",c);
        }
    }
    return 0;
}
