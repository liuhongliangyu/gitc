#include <stdio.h>
int main (void){
    int a;
    int status = 0;

    while ((a =getchar()) != EOF){
         if (status == 0){
             if (a == 'a'){
                 status++;
             }
             else{
                 putchar(a);
                 status = 0;
             }
         }
        else if (status == 1){
             if (a == 'b'){
                 status++;
             }
             else {
                putchar('a');
                putchar(a);
                status = 0;
             }
         }
        else if (status == 2){
             if (a == 'c'){
                 status++;
             }
             else {
                 putchar('a');
                 putchar('b');
                 putchar(a);
                 status = 0;
             }
         }
        else if (status == 3){
             if (a == 'a'){
                 a = getchar();//ÅĞ¶Ïa
                 if (a == 'b'){
                     putchar('*');
                 }
                 else {
                     putchar('a');
                     putchar('b');
                     putchar('c');
                     putchar('a');
                     putchar(a);
                 }
                 status = 0;
             }
             else {
                 putchar('a');
                 putchar('b');
                 putchar('c');
                 putchar(a);
             }
             status = 0;
         }
        }
    return 0;
}
