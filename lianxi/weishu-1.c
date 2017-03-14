#include <stdio.h> 
int main (void){

    int a;
    int sum = 1;
    scanf ("%d",&a);
    printf ("a = %d\n",a);
    if ( a ){
        a = a / 10;
        printf ("a = %d\n",a);
    }
    if ( a ){
        a = a / 10;
        sum = sum + 1;
        printf ("a = %d\n",a);
    }
    if ( a ){
        a = a / 10;
        sum = sum + 1;
        printf ("a = %d\n",a);
    }
    printf ("sum = %d\n",sum);
    
return 0;
}
