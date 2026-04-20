#include <stdio.h>
int main() {
    int a = 5, b = 0;
    // 左边a>10为假，右边b++不会执行，b的值仍为0
    if (a>10 && b++) {
        printf("条件成立\n");
    }
    printf("b = %d\n", b);  // 输出：b = 0
    return 0;
}