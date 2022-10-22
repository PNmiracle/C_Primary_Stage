#include <stdio.h>

/*某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求换正好40张，且每种票子至少一张。问：有几种换法？*/
int main() {
    int res = 0;
    int tNum = 0; //票数
    int need = 100;

    for (int i = 1; i < 10; ++i) {
        need -= 10;
        tNum++;
        for (int j = 1; j < 20; ++j) {
            need -= 5;
            tNum++;
            for (int k = 1; k < 50; ++k) {
                need -= 2;
                tNum++;
                for (int l = 1; l < 100; ++l) {
                    need -= 1;
                    tNum++;
                    if (need == 0 && tNum == 40) {
                        res++;
                        need = 100;
                        tNum = 0;
                    } else if (need < 0 || tNum > 40) {
                        need = 100;
                        tNum = 0;
                        break;
                    }
                }
            }

        }
    }

    printf("%d\n", res);
    return 0;
}
