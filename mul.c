#include <stdio.h> //头文件包含


#define PI 3.14159

int mul(int a, int b,int c); //用户定义


int main() {

    int num1, num2,num3,prod;

    printf("enter three integers: " );
    scanf("%d %d %d",&num1,&num2,&num3 );

    prod=mul(num1,num2,num3);

    printf("product:%d\n",prod);

    return 0;
}
int mul (int a, int b, int c){
    return a*b*c;
}
