#include <stdio.h>

struct student {
    int num;
    char name[20];
    char sex;
};

int main() {
    struct student s = {1001, "wangle", 'M'};
    struct student *p;
    p = &s;
    printf("%d %s %c\n", p->num, p->name, p->sex);

    struct student sarr[3] = {1001, "lilei", 'M', 1005, "cxz", 'M', 1006, 'xyjy', 'F'};
    int num;
    p = sarr;
    printf("---------------\n");
    num = p->num++;
    printf("num = %d, p->num =%d\n", num, p->num);
    num = p++->num;
    printf("num = %d, p->num =%d\n", num, p->num);

    return 0;
}
