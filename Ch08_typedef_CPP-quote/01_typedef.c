#include <stdio.h>
typedef struct student {
    int num;
    char name[20];
    char sex;
}stu, *pstu;

typedef int INTEGER;
int main() {
    stu s = {1001, "wangle", 'M'};
    pstu p;
    p = &s;
    INTEGER i = 10;
    printf("i = %d, p->num = %d\n", i, p->num);

    return 0;
}
