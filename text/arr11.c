#include <stdio.h>

// 求数组最大值
int getMax(int a, int b)
{

    return a > b ? a : b;
}
int main()
{
    int i, j;
    printf("输入两个不相等整数");
    scanf("%d %d", &i, &j);
    int max = getMax(i, j);
    printf("最大值：%d\n", max);
    return 0;
}