#include <stdio.h>
 
int main ()
{
    int a = 0,sum=0;

    while( a <= 100)
    {
        printf("%d \n ", a);
        
        sum=sum+a;
        a=a+1;
        printf("sum:%d\n",sum);
    }
    printf("sum :%d\n", sum);

    return 0;
}