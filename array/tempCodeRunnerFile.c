// 题目2：统计数组中每个数字出现的次数
// 输入 10 个整数 到一维数组中，每个数的范围在 0~9 之间。编程统计 0~9 找到出现次数最多的数  并输出 出现几次 比如 打印  数字 5 出现了 3次
#include <stdio.h>
int main()
{
    int a[10];
    int i;
    int count[10] = {0};
    int MaxNum = 0;
    int MaxCnt = 0;
    printf("输入10个整数\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        count[a[i]]++;

        if (count[i] > MaxCnt)
        {
            MaxCnt = count[i];
            MaxNum = i;
        }
    }
    printf("出现次数最多的数 %d 出现%d次 ", MaxNum, MaxCnt);

    return 0;
}