#include <stdio.h>
void change(int *p) {
    int ret;
    *p = *p / 2;
}

int main() {
    int i;
    scanf("%d", &i);
    change(&i);
    printf("%d\n", i);

    return 0;
}
