#include<stdio.h>
int main()
{
    int a=18;
    int b=24;
    int c=a % b;
    while(c!=0)
    {
        a=b;
        b=c;
        c=a%b;
        printf("%d \n",b);

    }
    return 0;
}