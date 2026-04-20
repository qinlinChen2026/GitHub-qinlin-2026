#include <stdio.h>   // 头文件包含

#define PI 3.14159    // 宏定义

// 函数声明
int sum(int num1,int num2);

int main() {         // 主函数
    // 变量声明
int ret;
 // 函数调用
    ret = sum(50,100);

    // 输出结果
    printf("Sum: %d\n", ret);

    return 0;        // 返回 0 表示程序成功执行
}

// 函数定义
int sum(int num1,int num2) {
  int sum=0;

   /* for 循环执行 */
   for( int a = num1; a <=num2;a=a+1)
   {
    sum=sum+a;

      printf("a 的值： %d\n", a);
   }
 printf("sum :%d\n", sum);
   return sum;

}