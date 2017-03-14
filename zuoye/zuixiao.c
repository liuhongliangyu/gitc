#include <stdio.h>
int main (void){
    int a = 4,b = 2,c = 8;
    if (a < b){
        if (a < c){
            printf ("min == a = %d\n",a);
        }
        else {
            printf ("min == c = %d\n", c);
        }
    }
    else {
        if (b > c) {
            printf ("min == c = %d\n",c);
        }
        else {
            printf ("min == b = %d\n",b);
        }
    }
 
return 0;
}
