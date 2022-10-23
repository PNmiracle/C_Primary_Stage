#include <stdio.h>
//数组名在传递时弱化为指针
void change(char *d) {
//    d[0] = 'H';
    *d = 'H';
}

int main() {
    char str[10] = "hello";
    change(str);

    puts(str);
    return 0;
}
