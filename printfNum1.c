#include <stdio.h>

// 函数1：根据大小 正序/逆序 打印数字
void printNum(int a, int b) {
    if (a < b) {
        // a < b → 顺序打印
        for (int i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        // a >= b → 逆序打印
        for (int i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }
    printf("\n"); // 换行
}

// 函数2：阶乘函数（自动判断大小）
int factorial(int num1, int num2) {
    int result = 1;

    if (num1 < num2) {
        for (int a = num1; a <= num2; a++) {
            result *= a;
        }
    } else {
        for (int a = num1; a >= num2; a--) {
            result *= a;
        }
    }
    return result;
}

int main() {
    int c, d;

    printf("请输入第一个数字：");
    scanf("%d", &c);
    printf("请输入第二个数字：");
    scanf("%d", &d);

    // 调用打印函数
    printf("打印结果：");
    printNum(c, d);

    // 调用阶乘函数
    int res = factorial(c, d);
    printf("%d ~ %d 的乘积 = %d\n", c, d, res);

    return 0;
}