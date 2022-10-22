#include <stdio.h>

int main() {
    int a[3] = {2, 7, 8};
    int *p;
    int j;
    int k;
    p = a;//让指针变量p, 指向数组的开头,初始化
//    j = *p++;//j = *p;p++, 任何时候都先把后++先去掉, 第二步看优先级,只有当高于++的优先级,才当做整体++
    k = (*p)++;
//    printf("a[0] = %d, j = %d, *p =%d\n", a[0], j, *p);//2, 2, 7
    printf("a[0] = %d, k = %d, *p =%d\n", a[0], k, *p);


    return 0;
}
