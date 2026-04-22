// 给定一个整数 n，计算所有数位之和，负数先取绝对值
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, sum = 0;

    printf("请输入一个整数：");
    scanf("%d", &n);

    n = abs(n);  // 负数变正数

    // while 循环实现拆数字
    while (n > 0) {
        sum = sum + n % 10;  // 取最后一位累加
        n = n / 10;          // 去掉最后一位
    }

    printf("数位之和：%d\n", sum);

    return 0;
}