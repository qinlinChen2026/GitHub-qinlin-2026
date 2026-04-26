// 定义一个二维数组 并打印出二维数组
#include <stdio.h>

int main()
{
    // 定义2行3列二维数组
    int twoArr[2][3] = {
        {1, 2, 3},
        {4,5, 6}
    };

    // 遍历行
    for (int i = 0; i < 2; i++)
    {
        // 遍历列
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", twoArr[i][j]);
        }
        // 每行结束换行
        printf("\n");
    }

    return 0;
}