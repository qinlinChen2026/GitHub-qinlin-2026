#include <stdio.h>

// 阶乘函数
int factorial(int num1,int num2) {
    int result = 1;  // 阶乘从1开始乘
    
    // 循环：1*2*3*...*n
    for(int a = num1; a <= num2; a=a+1) {
        result = result * a;
    }
    
    return result;
}

int main() {
    int c;
    int d;
     printf("请输入一个数字：");
     scanf("%d", &c);
    printf("请输入一个数字：");
     scanf("%d", &d);
    // 调用阶乘函数
    int res = factorial(c,d);
    
    printf("%d~%d 的阶乘 = %d\n", c, d, res);
    return 0;
}