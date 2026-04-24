// 随机生成 1～100 十个数、存入数组
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 存10个随机数
    int numArr[10];
    int i;

    // 设置随机种子，保证每次数字不一样
    srand((unsigned)time(NULL));

    // 循环生成10个随机数
    for(i = 0; i < 10; i++)
    {
        // 1~100 随机数
        numArr[i] = rand() % 100 + 1;
    }

    // 输出数组所有随机数
    printf("随机生成的10个数：\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", numArr[i]);
    }

    return 0;
}