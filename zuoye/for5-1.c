#include <stdio.h>
int main (void){
    int a;
    int b = 0;
    printf("please input a integer:");
    scanf("%d",&a);
    printf("input number is:%d\n",a);
    while (a != 0){
        b = b * 10 + (a % 10);
        a = a / 10;
    }
    printf ("opposite number:%d\n",b);
    

    return 0;
}
