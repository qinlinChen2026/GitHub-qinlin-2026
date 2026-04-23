#include <stdio.h>


void swapArr(int arr[], int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
int main()
{
    int nums[5]={2,5,6,8,9};
    swapArr(nums,2,4);
    for(int i=0;i<5;i++)
    {
        printf(" %d ",nums[i]);

    }
    return 0;
}