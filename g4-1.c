#include <stdio.h>
int main(void) {
    int wa1, wa3, i, k, fugo;
    double wa2, j;
    fugo = -1;
    wa1 = 0;
    wa2 = 0.0;
    wa3 = 0;
    //(1)
    for (i = 0; i <= 95; i += 5) {
        wa1 += i;
    }
    //(2)
    for (j = 0.0; j <= 10.0; j += 0.2) {
        wa2 += j;
    }
    //(3)
    for (k = 1; k <= 100; k++) {
        wa3 += k * fugo;
        fugo = -fugo;
    }
    printf("wa1=%d\n",wa1);
    printf("wa2=%.1f\n",wa2);
    printf("wa3=%d\n",wa3);
    return 0;
}