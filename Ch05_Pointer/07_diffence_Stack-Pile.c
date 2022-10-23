#include <stdio.h>
#include <malloc.h>
#include <string.h>

char *print_stack() {
    char c[17] = "I am print_stack";
    puts(c);
    return c;
}

char *print_malloc() {
    char *p;
    p = (char *) malloc(20);
    strcpy(p, "I am print_malloc");
    puts(p);
    return p;
}

int main() {
    char *p;
    p = print_stack();// 栈空间随着函数的结束而释放, 所以打印不出来
    puts(p);
    p = print_malloc();// 堆空间不会随着函数的结束而释放, 除非主动free
    puts(p);

    return 0;
}
