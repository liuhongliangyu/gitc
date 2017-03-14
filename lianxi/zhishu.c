#include <stdio.h>
int main(void){
    int i;
    int j;
    int flag = 0;

    for(i = 2; i <=100; i++){
        flag = 0;
        for (j = 2; j <= i - 1; j++){
            if(i % j == 0){
                flag = 1;
            }
        }
        if (flag == 0){
            printf ("%d\n",i);
        }
    }
    return 0;
}
