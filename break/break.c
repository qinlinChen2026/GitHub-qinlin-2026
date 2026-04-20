// 找到1-100之间第一个能被3整除的数字，要求使用break。
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}