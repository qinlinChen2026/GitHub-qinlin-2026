#include <stdio.h>
 
int main ()
{
    int sum=0;

   /* for 循环执行 */
   for( int a = 0; a <=10;a=a+1)
   {
    sum=sum+5*a;

      printf("a 的值： %d\n", a);
      printf("sum:%d\n",sum);
   }
 printf("sum :%d\n", sum);
   return 0;

}