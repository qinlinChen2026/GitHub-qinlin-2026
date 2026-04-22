// 描述
// 给定一个整数 n，请计算其所有数位之和。若n为负数，请先取其绝对值
// 示例1
// 输入:12
// A
// 说明:1+2=3
// 输出:3
// 示例2
// 输入:-305
// 说明:获取绝对值305，再求和3+0+5=8
// 输出:8
#include <stdio.h>
#include <stdlib.h> // abs() 绝对值函数需要这个头文件
int main()
{
    int n, sum = 0;å
    printf("随机输入一个整数");
    scanf("%d", &n);
    n = abs(n);
    // 负数变正数
    for (; n > 0; n = n / 10)
    {
        sum = sum + n % 10;
    }
    printf("数位之和：%d\n", sum);

    return 0;
}