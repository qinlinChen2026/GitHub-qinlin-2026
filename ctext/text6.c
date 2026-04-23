// 题目1
// 从键盘输入 10 个整数 存入一维数组，要求：
// 把数组中的元素按从小到大排序（用冒泡排序）
// 输出排序后的数组
// 再输入一个整数 key，在数组中查找 key 是否存在
// 如果存在，输出它第一次出现的下标；不存在则输出 -1
#include <stdio.h>

int main()
 {
    int a[10];
    int i, j, temp;
    int key, pos = -1;
    printf("请输入10个整数\n");
    for (i = 0; i < 10; i++)
     {
        scanf("%d", &a[i]);
    }

    // 2. 冒泡排序（从小到大）
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // 3. 输出排序后的数组
    printf("排序后数组：");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // 4. 输入要查找的key
    printf("请输入要查找的数：");
    scanf("%d", &key);

    // 5. 查找第一次出现的下标
    for (i = 0; i < 10; i++) {
        if (a[i] == key) {
            pos = i;
            break;  // 找到第一次就退出
        }
    }

    // 6. 输出结果
    printf("下标：%d\n", pos);

    return 0;
}