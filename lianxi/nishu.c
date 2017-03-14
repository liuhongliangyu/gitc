#include <stdio.h>
int main(void){
    int a = 12;
    int b;
    int i;
    for(;i > 0;){
        b = b * 10 + (a % 10);
        a = a / 10;
        printf("a = %d\n",a);
    }
    printf ("b = %d\n",b);



return 0;
}
