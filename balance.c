#include <stdio.h>

int main() {
    // 定义数组
    double balance[10];
    
    // 赋值
    balance[4] = 100.50;
    balance[5] = 200.75;
    balance[9] = 999.99;
    
    // 打印
    printf("第1个值：%.2f\n", balance[4]);
    printf("第2个值：%.2f\n", balance[5]);
    printf("第10个值：%.2f\n", balance[9]);
    
    return 0;
}