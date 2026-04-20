#include <stdio.h>
 
/* 函数声明 */
int min(int num1, int num2);
 
int main ()
{
   /* 局部变量定义 */
   int a = 100;
   int b = 200;
   int ret;
 
   /* 调用函数来获取最大值 */
   ret = min(a, b);
 
   printf( "Min value is : %d\n", ret );
 
   return 0;
}
 
/* 函数返回两个数中较大的那个数 */
int min(int num1, int num2) 
{
   /* 局部变量声明 */
   int result;
 
//    if (num1 > num2)
//       result = num2;
//    else
//       result = num1;
int min=(num1<num2) ? num1 :num2 ;

 
   return min; 
}