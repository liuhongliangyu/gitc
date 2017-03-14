#include <stdio.h>
int main(void){
    int i = 1;
    int sum = 0;
    int j = 1;

    for (i = 1; i <= 10; i++){
        j = j * i;
        sum = sum + j;
        printf ("sum = %d\n",sum);

    }
    return 0;
}
