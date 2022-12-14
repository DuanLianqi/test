#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int a, i;
    //使用for循环生成10个随机数
    srand((unsigned)time(NULL));
    for (i = 0; i < 10; i++) {
        //srand((unsigned)time(NULL));
        a = rand();
        printf("%d ", a);
    }
    return 0;
}