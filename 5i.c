#include<stdio.h>
int main()
{int i=1;
    int result;

    result=1;

    while(i<=5)
   {
    result=result*i;
    i++;
    printf("i = %d, result = %d\n",i,result);
   }


    return 0;

}