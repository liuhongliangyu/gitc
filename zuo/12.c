#include <stdio.h>
int main (void){
    int a;
    scanf ("%d",&a);
    int i, j;
    printf ("%d = ",a);
    
    for (i = 2; i <= a; i++){
        while (i != a){
            if (a % i == 0){
                printf ("%d*",i);
                a = a / i;
                
            }
            else {
                break;
            }
        }
    }
    printf ("%d\n",a);


    return 0;
}
