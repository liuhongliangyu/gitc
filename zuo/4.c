#include <stdio.h>
int main(void){
    int x;
    int y;
    scanf ("%d",&x);
    scanf ("%d",&y);
    int a = x - 12;
    


    if (a > 0){
        printf ("%d:%02d PM\n",a,y);
    }
    if (a < 0) {
        printf("%d:%02d AM\n",x,y);
    }
    if (a == 0){
        printf ("%d:%02d PM\n",x,y);
    }

    return 0;
}
