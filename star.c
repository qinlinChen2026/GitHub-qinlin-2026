#include <stdio.h>
int main() {
    // 外层：控制行数（3行）
     for(int i=1; i<6; i++) {
        
        // 内层：控制每行打印几个（5个）
        for(int j=1; j<=i*4; j++) {
            printf("*& ");
        }
        
      printf("\n"); // 换行
    }
    return 0;
}

