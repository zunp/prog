#include <stdio.h>
int main(void) {
    int n, k50, k10, k5, k1, kin, x;
    printf("何円を崩しますか？=>");
    scanf("%d",&x);
    printf("50円 10円 5円 1円\n");
    n = 0;
    for (k50 = 0; k50 <= x / 50; k50++) {
        for (k10 = 0; k10 <= x / 10; k10++) {
            for (k5 = 0; k5 <= x / 5; k5++) {
                for (k1 = 0; k1 <= x; k1++) {
                    kin = k50 * 50 + k10 * 10 + k5 * 5 + k1;
                    if (kin == x) {
                        printf("%d    %d    %d    %d\n",k50,k10,k5,k1);
                        n++;
                    }
                }
            }
        }
    }
    printf("%d円崩しの組み合わせは %d 通りです\n",x,n);
    return 0;
}