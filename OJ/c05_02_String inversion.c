#include <stdio.h>
#include <string.h>

/*读取一个字符串，字符串可能含有空格，将字符串逆转，原来的字符串与逆转后字符串相同，输出0，原字符串小于逆转后字符串输出-1，大于逆转后字符串输出1。例如输入 hello，逆转后的字符串为 olleh，因为hello 小于 olleh，所以输出-1

注意最后的判断一定要这么写，因为strcmp标准C中并不是返回-1和1，而是负值和正值*/
int main() {
    /* ---------------------- 字符串反转 ------------------- */
    char c[100];
    char d[100];
    gets(c);
    int len = strlen(c);
    for (int i = 0; i < len; i++) {
        d[i] = c[len - 1 - i];
    }
    //添加字符串结束符
    d[len] = '\0';
    //增量编写法
    puts(d);

    /* ---------------------- 输出  ------------------- */
    int result = strcmp(c, d);
    if (result < 0) {
        printf("%d\n", -1);
    } else if (result > 0) {
        printf("%d\n", 1);
    } else {
        printf("%d\n", 0);
    }
    return 0;

}
