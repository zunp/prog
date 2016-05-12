//programname: e2-24.c
#include <stdio.h>
int main(void) {
    int dat[5] = {11, 22, 33, 44, 55};
    int j, *p, sum = 0;
    printf("配列を使用した時\n");
    for (j=0; j<5; j++) {
        sum += dat[j];
    }
    printf("合計 = %d\n", sum);
    sum = 0;
    printf("ポインタを使用した時\n");
    p = dat;
    for (j=0; j<5; j++) {
        sum += *p;
        p++;
    }
    printf("合計 = %d\n", sum);
    return 0;
}