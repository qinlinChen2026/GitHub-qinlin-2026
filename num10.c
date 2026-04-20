#include<stdio.h>
int main ()
{int n ;
    scanf("%d",&n);
    if(n>=10)
    {
        printf( "n >=10\n");
    }
            else if(n>=5)
            {
            printf("n>=5并且n<10\n");
            }
            else
            {
            printf("5<n\n");
            }
    return 0;

}