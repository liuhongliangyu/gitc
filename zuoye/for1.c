#include <stdio.h>
int main (){
    int i = 1;
    int sum = 1;
    for (i = 1;i < 10;i++)
    {
        sum = (1 + sum) * 2 ;
        printf ("sum = %d\n",sum);
    }
return 0;
}
