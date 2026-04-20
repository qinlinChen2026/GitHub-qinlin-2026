// 题目要求输入错误
// 输入一个 0~100 的分数，用 switch 语句输出等级：
// 90 ~ 100 分 → 输出 A
// 80 ~ 89 分 → 输出 B
// 70 ~ 79 分 → 输出 C
// 60 ~ 69 分 → 输出 D
// 0 ~ 59 分 → 输出 E
// 不在 0~100 之间 → 输出 
#include<stdio.h>
int main()
{
    int num;
    printf("输入一个数");
    scanf("%d",&num);
   
    switch(num/10)
    {
    
        case 10:  
        case 9:  
            printf("A\n");
            break;
        case 8:    
            printf("B\n");
            break;
        case 7:    
            printf("C\n");
            break;
        case 6:    
            printf("D\n");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("E\n");
            break;

       default:
            printf("输入错误\n");
            break;
        
    }


    
    return 0;
}
