#include<stdio.h>
int main()
{int age;
    scanf ("%d",&age);
    if(age>=18)
    {
        printf("%d 成年\n",age);

    }
    else
    {
        printf("%d 未成年\n",age);
    }
    return 0;
}