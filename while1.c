#include <stdio.h>
 
int main ()
{
    int sum = 0;
    int num =0;
 
    while( sum  <= 3000)
    {num++;
        sum =sum+num;
    }
    printf("sum :%d\n", sum );
    printf("num :%d\n", num );
    return 0;
}