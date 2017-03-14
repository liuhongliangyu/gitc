#include <stdio.h>
int main (void){
    int a = 1;
    int sum = 0;
    int i;

    for (i = 1; i <= 10;i++){
        a = a * i;
        sum = sum + a;
    }
    printf ("sum = %d\n",sum);
    return 0;
}
