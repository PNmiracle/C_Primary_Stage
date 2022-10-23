#include <stdio.h>
int step(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }

    return step(n - 1) + step(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    int res = step(n);
    printf("%d\n", res);

    return 0;
}
