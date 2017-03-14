#include <stdio.h>
int main (void){
    int a[6] = {19,3,45,26,3,65};
    int i, j;
    int tmp;


    for (i = 0; i < 6;i++){
        for (j = 0; j < 6 - 1 - i; j++){
            if (a[j] < a[j + 1]){
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
        printf ("a[%d] = %d\n",6 - i - 1,a[6 - i - 1]);
    }
        printf ("\n");
   /* for (i = 0; i < 6; i++){
       // printf ("a[%d] = %d | ",i,a[i]);
       printf ("%d\t",a[i]);
    }
    printf ("\n");*/
    return 0;
}
