#include <stdio.h>
#include <string.h>
int main() {
    char c[20] = "wangdao";
    printf("len of c[] = %d\n", strlen(c));
    char d[20];
    strcpy(d, "study");
    puts(d);
    printf("两个字符串比较后的结果 = %d\n", strcmp("how", "hello"));
    strcat(c, d);

    return 0;
}
