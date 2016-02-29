#include <stdio.h>
int main(void) {
    double x[10];
    double max, min;
    int i = 0;
    while (i<10) {
        printf("x[%d]の要素->",i);
        scanf("%lf",&x[i]);
        i++;
    }
    max = x[0];
    min = x[0];
    i = 0;
    while (i<10) {
        if (max < x[i]) {
            max = x[i];
        }
        if (min > x[i]) {
            min = x[i];
        }
        i++;
    }
    printf("最大値->%.2f\n最小値->%.2f\n",max, min);
    return 0;
}