#include <stdio.h>
int main(void){
    int a,b,c;
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);


    if (a > b){
        if (b > c){
            printf("a > b > c");
        }
        else {
            if (a > c){
            printf ("a > C > b");
            }
            else {
                printf ("c > a >b");
            }
        }

    }
    else {
        if (a > c){
            printf ("b > a > c");
        }
        else {
            if (b > c){
            printf ("b > c > a");
            }
            else {
                printf ("c > b > a");
            }
        }
    }
    printf ("\n");
    return 0;
}
