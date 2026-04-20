#include <stdio.h>

int main(){
    int num1,num2;
    printf("enter two integers: \n");
    scanf("%d %d",&num1,&num2);
    //  num1 = 5;
    //  num2 = 7;
int isEqual = (num1 == num2);  // 使用关系运算符 ==
printf("isEqual = %d\n", isEqual);
printf("!isEqual = %d\n", !isEqual);
    if(!isEqual){
        printf("num1 !=num2\n");
    } else   {
        printf("num1 ==num2\n");
    }
    return 0;
}