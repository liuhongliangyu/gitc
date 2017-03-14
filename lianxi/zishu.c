#include <stdio.h>
int main (void){
    char a;
    a = getchar ();
    int sum = 0;
    int temp = 0;

    while (a != EOF){
        printf ("%c",a);
        a = getchar();
        if ((a >= 65 && a <= 90) && (a >= 97 && a <= 122)){
            temp = temp + 1;
        }
        sum = sum + 1;
    }
    printf ("temp = %d\n",temp);
    printf ("sum = %d\n",sum);
    return 0;
}
