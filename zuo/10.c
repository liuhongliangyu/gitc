#include <stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    int sum = 0;
    
    while (a != 0){
        a = a / 10;
        sum = sum + 1;
    }
        printf ("sum = %d\n",sum);


    return 0;
}
