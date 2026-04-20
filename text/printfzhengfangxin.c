// 题目
// 输入一个整数 n（比如 5），打印一个 n × n 的空心正方形效果如下（n=5）：
// plaintext
// *****
// *   *
// *   *
// *   *
// *****
#include <stdio.h>
int main()
{
    int n;
    int i;
    int j;
    printf("输入一个数n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if(i==1||i==n||j==1||j==n)
            {
            printf("*");
            }
            else
            {
                printf(" ");

            }
        }
        printf("\n");
    }
    return 0;
}