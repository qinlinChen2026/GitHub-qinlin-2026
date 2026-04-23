// 需求:很多App都有不同的优惠券假设，现在有以下优惠券
// 全场商品满10减8
// 全场商品满50减30
// 全场商品满100减50
// 全场商品满200减90
// 会员卡:全场8折
// 请问:会员卡和优惠券不能同时使用，最优惠的价格是多少?
#include <stdio.h>
double getMin(double arr[], int l)
{

    int i;
    double min = arr[0];
    for (i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    double a, b, c, d, e;
    // a表示全场商品满10减8
    // b表示 全场商品满50减30
    //  c表示全场商品满100减50
    //  d表示全场商品满200减90
    //  e表示会员卡:全场8折
    double k;
    // 下单金额
    printf("输入下单金额");
    scanf("%lf", &k);
    if (k >= 10)
    {
        a = k - 8;
    }
    else
    {
        a = k;
    }
    if (k >= 50)
    {
        b = k - 30;
    }
    else
    {
        b = k;
    }
    if (k >= 100)
    {
        c = k - 50;
    }
    else
    {
        c = k;
    }
    if (k >= 200)
    {
        d = k - 90;
    }
    else
    {
        d = k;
    }
    e = k * 0.8;

    printf("全场商品满10减8最终价格：%.2f\n", a);
    printf("全场商品满50减30最终价格：%.2f\n", b);
    printf("全场商品满100减50最终价格：%.2f\n", c);
    printf("全场商品满200减90最终价格：%.2f\n", d);
    printf("会员卡:全场8折最终价格:%.2f\n", e);

    double nums[5] = {a, b, c, d, e};
    double min = getMin(nums, 5);

    printf("最优惠的价格：%f\n", min);

    return 0;
}
