#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;

    printf("%d ", *p);
    printf("%d ", *(p + 1));
    printf("%d", p[2]);

    return 0;
}