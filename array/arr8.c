// 【进阶题 5】统计偶数个数
// 数组：{1,2,3,4,5,6}
// 写函数 countEven，返回数组中偶数的个数
// 输出结果
#include <stdio.h>
int countEven(int arr[],int n)
{
int count=0;
int i;
for(i=0;i<n;i++)
{
    if(arr[i] %2==0)
    {
count++;
    }
}
    return count;

}
int main()
{
    int nums[6]={0,1,3,4,6,7};

int even_nums= countEven(nums, 6);
printf("偶数的个数：%d\n", even_nums);

        return 0;
}
