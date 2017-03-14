#include <stdio.h>
int main (void){
    char a;
    a = getchar();
    while (EOF != a){
        if (a == 32){
            printf ("%%20");
        }
        else {
            printf ("%c",a);
        }
        a = getchar();
    }
    printf ("\n");
    return 0;
}
