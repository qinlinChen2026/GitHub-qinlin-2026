#include <stdio.h>   // 头文件包含

#define PI 3.14159    // 宏定义

// 函数声明
void printfNum(int num1,int num2){
    
    if(num1<num2){
for( int a = num1; a <=num2;a=a+1)
printf("%d ", a);
    }
else{
for( int a = num1; a  >=num2;a=a-1)
printf("%d ", a);
}
printf("\n");
}
int main() {
    // 测试调用
    printfNum(5, 10);
    printfNum(10, 5);
    return 0;
}
// int main() {         // 主函数
    // 变量声明
//     int num1, num2;
// for( int a = num1; a <=num2;a=a-1)
    // 用户输入
    // printf("Enter two integers: ");
    // scanf("%d %d", &num1, &num2);

    // 函数调用
    // sum = add(num1, num2);

    // 输出结果
    // printf("Sum: %d\n", sum);int main() {
//     int c;
//     int d;
//      printf("请输入一个数字：");
//      scanf("%d", &c);
//     printf("请输入一个数字：");
//      scanf("%d", &d);
//     printf("a 的值： %d\n", a);
//    }

//     return 0;        // 返回 0 表示程序成功执行


// 函数定义
// int add(int a, int b) {
//     return a + b;
