#include <stdio.h>

/*某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求换正好40张，且每种票子至少一张。问：有几种换法？
 *
 * */
int main() {
    int res = 0;
    // 设10, 5, 2, 1元的票数分别是i, j , k , l,
    // 条件1: 每种面值总和 <= 100 - ( 5 + 2 + 1) , 条件2: 每种票数 <= 40
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 19; j++) {
            for (int k = 1; k <= 40; k++) {
                for (int l = 1; l <= 40; ++l) {
                    if (i * 10 + j * 5 + k * 2 + l == 100
                        && i + j + k + l == 40) {
                        res++;
                        printf("i = %d, j = %d, k = %d, l = %d\n",
                               i, j, k, l);
                    } else if (i * 10 + j * 5 + k * 2 + l > 100
                                || i + j + k + l > 40) {
                        break;
                    }
                }
            }
        }
    }
    printf("%d\n", res);
    return 0;
}
