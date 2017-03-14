#include <stdio.h>
int main (void){
    int n = 50;
    int i;

    for (; n <= 100; n++){
        printf ("%d = ",n);
        for (i = 2; i <= n; i++){
            while (i != n){
                if (n % i == 0){
                    printf ("%d*",i);
                    n = n / i;
                }
                else {
                    break;
                }
                printf("i = %d\n",i);
            }
            printf("%d\n",i);
        }
    printf ("%d\n",n);
    }
    return 0;
}
