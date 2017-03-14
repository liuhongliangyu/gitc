#include <stdio.h>
int main(void){
    int a;
    int b = 0;
    scanf("%d",&a);
    printf("a = %d\n",a);
    while (a != 0){
        b = b * 10 + a % 10;
        a = a / 10;
    }
    printf ("%d\n",b);
    return 0;
}
