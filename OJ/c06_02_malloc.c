#include <stdio.h>
#include <malloc.h>

int main() {
    char *p;
    int n;
    char c;

    scanf("%d", &n);
    p = (char *) malloc(n);
    scanf("%c", &c);// 为了去除缓冲区的'\n'
    gets(p);
    puts(p);

    free(p);
    p = NULL;
    return 0;
}
