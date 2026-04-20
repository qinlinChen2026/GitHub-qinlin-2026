#include <stdio.h>

int main()
{
    int month;

    printf("请输入月份");
    scanf("%d", &month);

    switch
    {
    case 3:
    case 4:
    case 5:
        printf("春季\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("夏季\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("秋季\n");
        break;
    case 1:
    case 2:
    case 12:
        printf("冬季\n");
        break;
    default:
        printf("输入错误：\n");
    }

    return 0;
}