#include <stdio.h>
#include <string.h>

#define MAX_TICKET 5    // 一趟车共5张票

// 车次信息
typedef struct {
    char trainNo[20];   // 车次 G123
    int ticket;         // 剩余票数
    int isLock;         // 是否正在被锁定（抢票中）
} Train;

// 初始化车次
void initTrain(Train *t, const char *no, int num) {
    strcpy(t->trainNo, no);
    t->ticket = num;
    t->isLock = 0;
}

// 查询余票
void queryTicket(Train t) {
    printf("===== %s =====\n", t.trainNo);
    printf("剩余车票：%d 张\n", t.ticket);
    if (t.isLock)
        printf("当前有用户正在抢票……\n");
    printf("===================\n");
}

// 抢票：尝试锁定票（防止多人同时买最后一张）
int grabTicket(Train *t) {
    if (t->ticket <= 0) {
        printf("票已售罄，抢票失败\n");
        return 0;
    }
    if (t->isLock) {
        printf("当前正在抢票中，请稍后\n");
        return 0;
    }
    // 锁定
    t->isLock = 1;
    printf("抢票成功，已为您锁定座位，请在 30 秒内支付\n");
    return 1;
}

// 订票：真正扣减库存
int bookTicket(Train *t) {
    if (!t->isLock) {
        printf("未锁定座位，无法购票\n");
        return 0;
    }
    t->ticket--;
    t->isLock = 0;    // 解锁
    printf("购票成功！已出票\n");
    return 1;
}

// 取消抢票（未支付释放锁）
void cancelGrab(Train *t) {
    t->isLock = 0;
    printf("已取消抢票，座位释放\n");
}

int main() {
    Train t;
    initTrain(&t, "G123 北京→上海", MAX_TICKET);

    int op;
    while (1) {
        printf("\n1.查询余票  2.抢票  3.支付购票  4.取消抢票  0.退出\n");
        printf("请选择操作：");
        scanf("%d", &op);

        if (op == 0) break;

        switch (op) {
            case 1:
                queryTicket(t);
                break;
            case 2:
                grabTicket(&t);
                break;
            case 3:
                bookTicket(&t);
                break;
            case 4:
                cancelGrab(&t);
                break;
            default:
                printf("输入错误\n");
        }
    }

    return 0;
}