#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    // 现在有一个数组，存储的是一个同学的期中考试成绩。
    char course[8][256] = { "语文", "数学", "英语", "物理", "化学", "生物", "历史", "地理" };
    char name[5][256] = {"Alan", "Bob", "Clain", "David", "Elis"};
    int score[5][8];
    int sum[5] = {0};
    float avg[8] = {0};

    int i,j;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 8; j++)
        {
            score[i][j] = rand() % 100;
        }
    }


    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 8; j++)
        {
            sum[i] += score[i][j];
            avg[j] += score[i][j];
        }
    }


    for(i = 0; i < 8; i++)
    {
        printf("\t%s", course[i]);
    }

    printf("\t总分");

    for(i = 0; i < 5; i++)
    {
        printf("\n%s", name[i]);
        for(j = 0; j < 8; j++)
        {
            printf("\t %d",score[i][j]);
        }
        printf("\t%d", sum[i]);
    }

    printf("\n平均分");

    for(j = 0; j < 8; j++)
    {
        printf("\t%.1f", avg[j] / 5.0);
    }

    printf("\n");
    return 0;
}
