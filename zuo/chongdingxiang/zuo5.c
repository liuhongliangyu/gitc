#include <stdio.h>
int main (void){
    char a;
    a = getchar();
    int status = 0;

    while (a != EOF)
    {
        if (status == 0){
            if (a == '%'){
                status++;
            }
            else {
                status = 0;
                putchar (a);
            }
        }
        else if (status == 1){
            if (a == '2'){
                status++;
            }
            else {
                putchar('%');
                putchar(a);
                status = 0;
            }
        }
        else if (status == 2){
            if (a == '0'){
                putchar(' ');
            }
            else {
                putchar('%');
                putchar('2');
                putchar(a);
            }
            status = 0;

        }
        a = getchar();
    }
    return 0;
}
