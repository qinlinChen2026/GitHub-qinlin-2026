// 需求:小明在每次订外卖都会在多家平台对比，看谁的优惠力度更大已知:
// 饱了么App:全场9折优惠
// 美单App:满30减10元
// 请问1:
// 小明买了一吨烧烤50元，在哪家下单更划算
// 请问2:
// 如果价格不确定，数据由键盘录入而来呢?
#include <stdio.h>
int main()
{
    double a, b;
    double c;
    printf("输入下单金额");
    scanf("%lf", &c);
    a = c * 0.9;
    if (c >= 30)
    {
        b = c - 10;
    }
    else
    {
        b = c;
    }

    printf("饱了么最终价格：%f\n", a);
    printf("美单最终价格：%f\n", b);
    if (a > b)
    {
        printf("美单更划算\n");
    }
    else if (a < b)
    {
        printf("饱了么更划算\n");
    }
    else
    {
        printf("美单和饱了么一样价格\n");
    }
    return 0;
}
