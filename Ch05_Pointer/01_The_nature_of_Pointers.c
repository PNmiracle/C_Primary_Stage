#include <stdio.h>

int main() {
    int i = 5;
    //指针的初始化一定是某个变量去地址
    int *p = &i;
    // 直接访问
    printf("%d", i);
    // 间接访问, *是解引用(拿地址取值)运算符,
    printf("*p = %d\n", *p);


    return 0;
}
