#include <stdio.h>
int main (void){
    int a;
    int status = 0;

    while ((a = getchar()) != EOF){
        if (status == 0){
            if (a == '%'){
                status++;
            }
            else {
                status = 0;
                putchar(a);
            }
        }
        else if (status == 1){
            if (a == '1'){
                status++;
            }
            else {
                putchar('%');
                putchar(a);
                status = 0;
            }

        }
        else if (status == 2){
            if (a == '2'){
                status++;
            }
            else {
                putchar('%');
                putchar('1');
                putchar(a);
                status = 0;
            }
        }
        else if (status == 3){
            if (a == '3'){
                status++;
            }
            else {
                putchar('%');
                putchar('1');
                putchar('2');
                putchar(a);
                status = 0;
            }
        }
        else if (status == 4){
            if (a == '4'){
                putchar('*');
            }
            else {
                putchar('%');
                putchar('1');
                putchar('2');
                putchar('3');
                putchar(a);
            }
            status = 0;
        }
    }

    return 0;
}
