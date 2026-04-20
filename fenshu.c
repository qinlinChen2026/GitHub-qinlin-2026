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
   
    
         
        if(num>=90&&num<=100)
      
       { 
        printf("%s\n","A");
       }
        
        else if(num>=80&&num<=89)
       { 
        printf("%s\n","B");
       }
        else if(num>=70&&num<=79)
        {
        printf("%s\n","C");
        }
       else  if(num>=60&&num<=69)
        {
        printf("%s\n","D");
        }
       else  if(num>=0&&num<=59)
        {
        printf("%s\n","E");
        }
        else
        {
            printf("输入错误\n");
        }
        


    
    return 0;
}
