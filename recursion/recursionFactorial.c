// // 4.27 题目1
// // 使用递归实现 输入数字n 的阶乘
// 数学表达n的阶乘阶乘公式：
// n!=n×(n−1)×...×1
// 4.27 题目1
// 递归求n阶乘
#include <stdio.h>

// 递归函数
int fact(int n)
{
    // 递归出口
    if (n == 1 || n == 0)
    {
        return 1;
    }
    // 递归公式：n! = n * (n-1)!
    return n * fact(n - 1);
}

int main()
{
    int n;
    printf("请输入数字n：");
    scanf("%d", &n);
    printf("%d的阶乘 = %d\n", n, fact(n));
    return 0;
}