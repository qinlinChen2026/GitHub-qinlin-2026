#include <stdio.h>

// 正确的打印函数
void printfNum(int num1, int num2){
    
    if(num1 < num2){
        for(int a = num1; a <= num2; a++){
            printf("%d ", a);
        }
    }
    else{
        for(int a = num1; a >= num2; a--){
            printf("%d ", a);
        }
    }
    printf("\n");
}

int main() {
    int c, d;
    
    printf("请输入第一个数字：");
    scanf("%d", &c);
    printf("请输入第二个数字：");
    scanf("%d", &d);
    

    printfNum(c, d);
    
    return 0;
}