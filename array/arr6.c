#include <stdio.h>
int getSum(int arr[], int n)
{
    int sum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
    int getAvg(int sum, int n)
    {
        return sum / n;
    }
    int main()
    {
        int nums[6] = {1, 2, 3, 4, 5, 6};
        int sum = getSum(nums, 6);
        double avg = getAvg(sum, 6);
        printf("总和:%d\n", sum);
        printf("平均值:%lf\n", avg);
        return 0;
    }
   