#include <stdio.h>
int main(void){
    int x;
    int sum = 0;
    scanf("%d",&x);
    for (; x != 0;){
        x = x / 10;
        sum = sum + 1;
    }
    printf ("sum = %d\n",sum);
    return 0;
}
