// 去除数组中的重复元素 5 4 3 6 5 3
#include <stdio.h>

int main()
{
    // 原数组
    int arr[6] = {5, 4, 3, 6, 5, 3};
    // 去重后新数组
    int newArr[6];
    int i, j, count = 0;
    int isSame;//是不是相同的数组，重复标记。
    

    // 遍历每一个元素
    for (i = 0; i < 6; i++)
    {
        isSame = 0;
        // 和已经存入新数组的元素对比
        for (j = 0; j < count; j++)
        {
            if (arr[i] == newArr[j])
            {
                isSame = 1; // 发现重复
                break;
            }
        }
        // 不重复，就存进去
        if (isSame == 0)
        {
            newArr[count] = arr[i];
            count++;
        }
    }

    // 输出去重结果
    printf("去重之后：");
    for (i = 0; i < count; i++)
    {
        printf("%d ", newArr[i]);
    }

    return 0;
}