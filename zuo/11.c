#include <stdio.h>//数字逆向输出。
int main (void){
    int a;
    scanf ("%d",&a);
    int b = 0;
    printf ("a = %d\n",a);

    while (a != 0){
        b = b * 10 + a % 10;
        a = a / 10;
        printf ("b = %d\n",b);
    }
    printf ("\n");
    printf ("b = %d\n",b);
    return 0;
}
