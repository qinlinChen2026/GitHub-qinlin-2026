#include <stdio.h>
/*
1
2
3
4
5
5



]
*/
int main(){
    int num1,num2;
    // printf("enter two integers: \n");
    // scanf("%d %d",&num1,&num2);
    num1 = 5;
    num2 = 5;
    if(num1 > num2){
        printf("num1 > num2\n");
    } else if (num1 ==num2) {
        printf("num1 >num2\n");
    } else {
        printf("num1 < num2\n");
    }
    return 0;
}