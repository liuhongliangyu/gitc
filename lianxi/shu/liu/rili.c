#include<stdio.h>
char *title="  SUN     MON     TUE     WED     THU     FRI     SAT";
char *month[12]={"Jau","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
char day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int leap(int year);
int week(int year);
int main()
{
    int i,j,year,initweek,k;
    do
    {
      printf("Please input the year:");
      scanf("%d",&year);
    }while (year<=1900);
    if(leap(year))
        day[1]=29;
    initweek=week(year);
    printf("\n\t%30d",year);
    for (i=0;i<12;i++)
    {
        printf("\n\t");
        for (k=0;k<55;k++)
            printf("-");
        printf("\n\t\n\t%29s",month[i]);
        printf("\n\n\t%s\n\t",title);
        for (k=0;k<initweek-1;k++)
            printf("\t");
        for (j=1;j<=day[i];j++)
        {
            if ((j+initweek)%7==1)
                printf("\t\n");
            printf("\t%5d",j);
        }
        printf("\n\t");
        for (k=0;k<55;k++)
            printf("-");
        initweek=(initweek+day[i]%7)%7;
        getchar();
    }
    printf("\n\t\n");
    getchar();
}
int leap(int year)
{
    int leap;
    if(year%400==0)
        leap=1;
    else if(year%4==0 && year%100!=0)
        leap=1;
    else leap=0;
    return leap;
}
int week(int year)
{
    unsigned int i,leapyears=0,totalday;
    for (i=1900;i<year;i++)
        if (leap(i)) leapyears++;
    totalday=(year-1900)*365+leapyears;
    return (totalday%7+1);
}
