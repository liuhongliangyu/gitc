#include <stdio.h>
int main (void){
    int i;
    int j;

    for (j = 2; j <= 100; j++){
        for (i = 2; i <= j; i++){
            if (j % i == 0){
                break;
            }
        }
        if (j == i){
            printf("%d\n",i);
        }
    }
    return 0;
}
