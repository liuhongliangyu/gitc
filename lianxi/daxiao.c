#include <stdio.h>
int main(void){
    int a = 3;
    int b = 6;
    int c = 4;
    if (a > b){
        if (b > c){
            printf("max == a = %d\n",a);
            printf("min == c = %d\n",c);
        }
        else {
            if (a > c){
            printf("max == a = %d\n",a);
            printf("min == b = %d\n",b);
            }
            else {
                printf ("max == a = %d\n",a);
                printf ("min == b = %d\n",b);
            }
        }
    }
    else {
        if (b > c){
           if (a > c) {
               printf("max == b = %d\n",b);
               printf("min == c = %d\n",c);
           }
           else {
               printf("max == b = %d\n",b);
               printf("min == a = %d\n",a);
           }
        }
    }
return 0;
}
