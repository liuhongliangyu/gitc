#include <stdio.h>
int main (void){
    char c;
    c = getchar();
    int sum = 0;

    while(EOF != c){
        printf ("%c",c);
        c = getchar();
        if (c == 10){

           // sum = sum + 1;//����������
        
        }
        sum = sum + 1;//�����ֽ�����
    }
    printf ("sum = %d\n",sum);
    return 0;
}
