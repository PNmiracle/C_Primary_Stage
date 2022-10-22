#include <stdio.h>

int main() {
    int a[100];
    int N;
    int res = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 2) {
            res++;
        }
    }

    printf("%d\n", res);
    return 0;
}
