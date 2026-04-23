// 输入 5 个整数 存入数组，然后把这 5 个数从头到尾输出一遍。
#include <stdio.h>
int main()
{
    int num[5];
    int i;
    int sum = 0;
    int max;
    int min;
    max = num[0];
    min = num[0];

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++)
    {

        sum = sum + num[i];
        if (num[i] > max)
        {
            max = num[i];
        }
        min = num[0];
        if (num[i] < min)
        {
            min = num[i];
        }
        printf("求和：%d\n", sum);
        printf("最大值：%d \n", max);
        printf("最小值：%d \n", min);
    }

    double avg = (double)sum / 5;
    printf("平均值:%f\n", avg);
    return 0;
}