#include<stdio.h>
int main()
{int year;
    scanf("%d",&year);
    if((year % 4 ==0||year % 100!=0)||(year % 400 ==0) )
    printf("%d is leapyear\n",year);
    else
       printf("%d is not leapyear\n",year);
       return  0;

}