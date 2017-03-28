#include <stdio.h>//输入一个数，求这个数上的每个位上的数字。
int main (void){
    int x,a;
    scanf ("%d",&x);
    a = x % 10;

    while (a != 0){
        a = x % 10;
        x = x / 10;
        printf ("%d\n",a);
        if ( x == 0){
            break;
        }
    }
    return 0;
}
