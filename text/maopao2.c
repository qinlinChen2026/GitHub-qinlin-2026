#include <stdio.h>
void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int nums[] = {5, 2, 3, 1, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    bubble_sort(nums, size);

    // 输出排序结果
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}