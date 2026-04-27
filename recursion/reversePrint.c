// 4.27 题目3
// 输入一个正整数（比如 12345），用递归把它倒着打印出来，输出：54321
// 要求：只能用递归，不能用数组、不能用循环。
// 递归思路
// 终止条件：数字 n < 10，直接打印自己
// 递归逻辑：
// 先递归打印 n / 10 剩下的高位，再打印当前最后一位 n % 10、
#include <stdio.h>

// 递归函数：逆序打印数字
void reversePrint(int n)
{
    // 终止条件：n < 10，直接打印
    if (n < 10)
    {
        printf("%d", n);
        return;
    }
    reversePrint(n / 10);
    printf("%d", n % 10);
}

int main()
{
    int n;
    printf("请输入一个正整数：");
    scanf("%d", &n);

    printf("逆序结果：");
    reversePrint(n);
    return 0;
}