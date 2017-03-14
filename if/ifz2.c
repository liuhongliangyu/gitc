#include <stdio.h>
int main()
{
    int year = 2020,month = 3,day = 10;
    int sum = 0;
    int leap = 0;
    if(((year % 4 == 0) && (year % 100 != 0))||(year % 400 == 0))
    {
        printf("leap year ...!\n");
        leap = 1;
    }
    else {
        printf("not leap year ...!\n");
    }
    if (month == 1){
        sum = day;
    }
    else if (month == 2){
        sum = 31 + day;
    }
    else if (month == 3){
        sum = 31 + 28 + leap + day;
    }
    printf("sum = %d\n",sum);















return 0;
}
