#include <stdio.h>
int main (void){
    int i,k; 
    int j, n;
    scanf ("%d",&n);

    for (i = 0; i < n - 1;i++){
        for (k = 0;k < n - 1;k++){
            printf (" ");
        }
        for (j = 0; j < 2 * i + 1;j++){
            printf ("* ");
        }
    }
    for (i = 0;i < n; i++){
        for (k = 0; k < i; k++){
            printf (" ");
        }
        for (j = 0; j < 2 * n - 1; j++){
            printf ("* ");
        }
        printf ("\n");
    }


   /* for (i = 0; i < 2; i++){
        for (j = 0; j <= 2 * i - 1  ; j++){
            printf ("*");
        }
        for (n = i - 1; n >= 0; n++){
            printf (" ");
        }
    }

    for (i = 0; i <= 5; i++){
        for (n = 0; n <= i; n++){
            printf (" ");
        }
        for (j = 0; j < 5 - 2 * i ; j++){
            printf ("*");
        }
        printf ("\n");
    }   
    for (i = 0; i < 2; i++){
        for (j = 0; j <= 2 * i - 1  ; j++){
            printf ("*");
        }
        for (n = i - 1; n >= 0; n++){
            printf (" ");
        } 
        printf ("\n");
    }*/

    return 0;
}
