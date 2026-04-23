// 题目2：统计数组中每个数字出现的次数
// 输入 10 个整数 到一维数组中，每个数的范围在 0~9 之间。编程统计 0~9 每个数字各出现了多少次，并输出结果。
#include <stdio.h>
int main()
{
    int i;
    int a[10];
    int count[10] = {0};

    printf("输入10个整数\n");
    // 取10个整数数组
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        count[a[i]]++;
        // count[ai]++;
    }
    for (i = 0; i < 10; i++)
    {
        printf("数字%d出现了%d次\n", i, count[i]++);
    }

    return 0;
}