#include <stdio.h>

void f(int *x) {
    *x = 99;
}

int main() {
    int a = 1;
    f(&a);
    printf("%d", a);
    return 0;
}