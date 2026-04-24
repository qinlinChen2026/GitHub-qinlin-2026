// 题目1
// 从键盘输入 10 个整数 存入一维数组，要求：
// 把数组中的元素按从小到大排序（用选择排序）
// 输出排序后的数组
// 再输入一个整数 key，在数组中查找 key 是否存在
// 如果存在，输出它第一次出现的下标；不存在则输出 -1
#include <stdio.h>
int main()
{
    int a[10];
    int i, j, temp, key, MinIndex;
    printf("输入10个整数\n");
    // 取10个整数数组
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    // 冒泡排序
    for (i = 0; i < 9; i++)
    {
        MinIndex = i;
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] < MinIndex)
            {
                MinIndex = j;

                temp = a[i];
                a[i] = a[MinIndex];
                a[MinIndex] = temp;
            }
        }
    }
    printf("打印排序后的数组：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("输入查找的再输入一个整数key\n");
    scanf("%d", &key);
    int isFound = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == key)
        {
            printf("%d\n", i);
            isFound = 1;
            break;
        }
    }
    if (isFound == 0)
    {
        printf("不存在则输出:%d\n", -1);
    }

    return 0;
}