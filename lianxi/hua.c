#include <stdio.h>
int main(void){
    int i;
    int sum;
    int a,b,c;
    for (i = 100; i < 1000;i++){
        a = i / 100;
        b = i /10 % 10;
        c = i % 10;

        sum = a * a * a + b * b * b + c * c * c;
        if (sum == i){

            
            printf ("sum = %d\n",sum);
        }

    }
return 0;
}
