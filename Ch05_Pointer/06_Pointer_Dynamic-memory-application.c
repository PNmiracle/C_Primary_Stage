#include <stdio.h>
#include <malloc.h>
#include <string.h>

//test
int main() {
    int i;// 申请多大空间
    scanf("%d", &i);
    char *p;
    p = (char*)malloc(i);//malloc申请空间,单位为字节
    char *p1 = p;
    strcpy(p, "malloc success");
    p++;
    puts(p);
    free(p1);//释放指针
    p = NULL;//避免成为野指针

    return 0;
}
