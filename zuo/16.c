#include <stdio.h> 
int main (void){
    int n = 1000;
    int i, j, k,r,z;

    for (i = 1; i < n; i++){
        k = 0;
        for (j = 1; j < i; j++){
            if (i % j == 0){
                k = k + j;
            }
        }
        if (k == i){
            printf ("%d\n",k);
        }
    }
    return 0;
}
