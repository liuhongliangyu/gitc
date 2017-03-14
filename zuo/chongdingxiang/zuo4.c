#include <stdio.h>
int main (void){
    char a;
    a = getchar();

    while (a != EOF){
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
}//将‘空格’转换为‘%20’
