// 4.27 题目2
// 使用递归实现 输入数字n 求1-n 的累加和

#include <stdio.h>

// 递归函数：求 1~n 累加和
int getSum(int n)
{
    // 递归出口
    if (n == 1)
    {
        return 1;
    }
    // 递归公式：1~n和 = n + 1~(n-1)和
    return n + getSum(n - 1);
}

int main()
{
    int n, res;
    printf("请输入数字n：");
    scanf("%d", &n);

    res = getSum(n);
    printf("1到%d的累加和 = %d\n", n, res);

    return 0;
}