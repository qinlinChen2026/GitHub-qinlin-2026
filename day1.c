// 输入一个 1~7 的整数，代表星期几：
// 1 → 输出 Monday
// 2 → Tuesday
// 3 → Wednesday
// 4 → Thursday
// 5 → Friday
// 6 → Saturday
// 7 → Sunday
// 其他数字 → 输出 input error
// 要求：必须用 switch 语句实现
#include <stdio.h>
int main()
{
    int day;
    printf("输入一个数字");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wendnesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 7:
        printf("Sunday \n");
        break;
    default:
        printf("input error \n");
        break;
    }
    return 0;
}