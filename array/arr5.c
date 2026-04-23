#include <stdio.h>

// 求数组最大值
int getMax(int arr[], int n)
{
    int max;
    int i;
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int n)
{
    int min;
    int i;
    min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int getSum(int arr[], int n)
{
    int sum = 0;
    int i;
    for (i = 1; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int nums[6] = {1, 2, 5, 10, 6, 8};
    int max = getMax(nums, 6);
    int min = getMin(nums, 6);
    int sum = getSum(nums, 6);
    printf("最大值：%d\n", max);
    printf("最小值：%d\n", min);
    printf("求和：%d\n", sum);

    return 0;
}