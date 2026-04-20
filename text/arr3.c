#include <stdio.h>

// 求数组最大值
int getMax(int arr[], int n)
{
 int max;
 int i;
 max=arr[0];
 for(i=1;i<n;i++)
 {
    if(arr[i]>max)
    {
        max=arr[i];
        
    }
 }
   return max;
}

int main()
{
  int nums[6] = {1, 2, 5, 10, 6, 8};
  int max = getMax(nums, 6);

  printf("最大值：%d\n", max);

  return 0;
}