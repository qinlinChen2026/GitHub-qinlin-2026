#include<stdio.h>
int main ()

{int month ;
    scanf("%d",&month);
    if(month>=3&&month<=5)
    printf("春天\n");
    else if(month>=6&&month<=8)
    printf("夏天\n");
    else if (month>=9&&month<=11)
    printf("秋天\n");
    else if(month==1 || month==2|| month==12)
    printf("冬天\n");    
    else
    printf("输入不是月份\n");
    
    
    return 0;
}