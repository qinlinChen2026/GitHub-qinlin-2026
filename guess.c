#include <stdio.h>
#include <stdlib1001.h>
#include <time.h>

int main()
{
    srand(time(0));
    int num = rand() % 100 + 1;

    int guess;
    int count = 0;

    printf("=== 猜数字游戏 ===\n");
    printf("我已经想好一个 1～100 的数，来猜吧！\n\n");

    while (1)
    {
        printf("请输入你猜的数字：");
        scanf("%d", &guess);
        count++;
        if (guess > num)
        {
            printf("太大了！再小一点\n\n");
        }else if (guess<num)
        {
            printf("太小了！再大一点\n\n");
        }
        else
        {
            printf("恭喜你猜对啦！🎉\n");
            printf("你一共猜了%d次\n",count);
            break;
        }
    }
    return 0;
}