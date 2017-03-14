#include <stdio.h>
int main(){
    int i = 1;
    int sum = 0;
    for (i = 1;i <= 10;i++){
        sum = sum +i;
        printf ("i = %d\n",i);
    }
    printf ("sum = %d\n",sum);

return 0;
}
