#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    int *p;
    /* ---------------------- 指针要初始化 ---------------------- */
    p = a;//对一个指针变量进行取值, 得到的类型是其基类型
    printf("*p = %d\n", *p);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));
    }
    return 0;
}
