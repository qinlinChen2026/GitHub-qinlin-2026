#include <stdio.h>

// 求数组最小值
int getMin(int arr[], int n)
{
 int min;
 int i;
 min=arr[0];
 for(i=1;i<n;i++)
 {
    if(arr[i]<min)
    {
        min=arr[i];
        
    }
 }
   return min;
}

int main()
{
  int nums[6] = {1, 2, 5, 10, 6, 8};
  int min = getMin(nums, 6);

  printf("最小值：%d\n", min);

  return 0;
}