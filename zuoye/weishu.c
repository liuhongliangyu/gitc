#include <stdio.h>
int main(void){
    int a = 442;
    int x = a/10;
    if (x >= 1 && x<10) {
        printf("a is 2wei\n");
    }
    else if (x >= 10 && x<100){
        printf("a is 3wei\n");
    }
    else {
        printf("false\n");
    }
return 0;
}
