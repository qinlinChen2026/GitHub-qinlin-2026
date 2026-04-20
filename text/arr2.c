// 编写一个 C 语言程序:
// 在主函数中输入一个长度为6 的整数数组
// 写一个函数 getMax，功能是返回数组中的最大值
// 写一个函数 getSum，功能是返回数组中所有元素的和// 在主函数中调用这两个函数，并输出最大值与总和
#include <stdio.h>
// 函数1：求数组最大值
int getMax(int arr[], int len)
{
    int i;
    int max;
    max = arr[0];
    for (i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
intgetSUM(int arr[], int len)
{
    int i;
    int sum = 0;
    for (i = 1; i < len; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int i;
    int nums[6];
    printf(“输入6个整数 \n”, nums);
    for (i = 1; i < 6; i++)
    {
        scanf("%d", &nums[i]);
    }
    int max = getMAX(nums, 6);
    int sum = getSUM(nums, 6);
    printf("最大值：%d", max);
    printf("总和：%d", sum);

    return 0;
}
