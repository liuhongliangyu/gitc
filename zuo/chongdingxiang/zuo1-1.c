#include <stdio.h>
int main (void){
    char a;
    a = getchar();
    int sum = 0;

    while (a != EOF){
        printf ("%c",a);
        a = getchar();

        if (a != 32 && a != 10){
            sum = sum + 1;
        }
    } 
    printf ("sum = %d\n",sum);
    return 0;
}//��������ո��롮�س���֮����ַ��ĺͣ����֡���ĸ�����ţ�
