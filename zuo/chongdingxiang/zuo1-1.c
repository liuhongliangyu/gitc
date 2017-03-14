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
}//输出除‘空格’与‘回车’之外的字符的和（数字、字母、符号）
