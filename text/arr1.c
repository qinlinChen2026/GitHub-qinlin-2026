#include <stdio.h>
int main()
{
    int num[5];
    int i;
    int sum = 0;
    int max;

    // 输入
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    // 输出每个数 + 累加求和
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", num[i]);
        sum = sum + num[i];
    }
    printf("总和：%d\n", sum);

    // 找最大值
    max = num[0];
    for (i = 1; i < 5; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    printf("最大值：%d\n", max);

    return 0;
}