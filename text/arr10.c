#include<stdio.h>
    int main()

    {
        int a,b,max;
        printf("输入两个不相等整数");
        scanf("%d %d",&a,&b);
       if(a>b)
       {
        max=a;
       }
       else
       {
        max=b;
       }
       
        printf("最大值：%d\n",max);

        return 0;
    }