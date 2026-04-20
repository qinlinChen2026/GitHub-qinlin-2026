#include<stdio.h>
    int main()
    {int n;
        printf("输入一个三位整数 ");
        scanf("%d",&n);
        int a=n % 10;
        int b=n /10 %10;
        int c=n /100;
        



        printf("个位：%d\n",a);
        printf("十位：%d\n",b);
        printf("百位：%d\n",c);

                return 0;
    }