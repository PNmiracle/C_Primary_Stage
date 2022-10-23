#include <stdio.h>
struct student {
    int num;//结构体成员
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};


int main() {
    struct student s = {1001,"cxz", 'M', 21, 99.9, "NJUPT"};
    printf("%d %s %c %d %5.2f %s\n", s.num, s.name, s.sex, s.age, s.score, s.addr);

    /* ---------------------- 结构体数组 ---------------------- */
    struct student sarr[3];
    for (int i = 0; i < 3; i++) {

    }

    return 0;
}
