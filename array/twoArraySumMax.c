// 4.26 题目3
// 题目要求

// 定义一个3行3列的整型二维数组，手动输入9个整数存入数组；

// 1. 遍历输出整个二维数组，按行列格式整齐打印；

// 2. 计算并输出数组中所有元素的总和；

// 3. 找出数组中的最大值并输出。
#include <stdio.h>
int main()
{
    int numArr[3][3];
    int i, j, maxNum;
    int sum = 0;
    printf("输入9个整数：\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &numArr[i][j]);
        }
    }
        maxNum = numArr[0][0];
        printf("\n二维数组内容：\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", numArr[i][j]);
                sum += numArr[i][j];

                if (numArr[i][j] > maxNum)
                {
                    maxNum = numArr[i][j];
                }
            }
            printf("\n");
        }

        // 输出结果
        printf("\n所有元素总和：%d\n", sum);
        printf("数组最大值：%d\n", maxNum);
    
    return 0;
}