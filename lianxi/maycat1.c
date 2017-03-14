#include <stdio.h>
int main (void){
    char a;
    a = getchar();

    while (EOF != a){
        if (a >= 97 && a <= 122){
            printf ("%c",a - 32);
        }
        else {
            printf ("%c",a);
        }
        a = getchar();
    }
    return 0;
}
