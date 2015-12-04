#include <stdio.h>
int main(void) {
    double v0, y, a, t, g;
    g = 9.81;
    printf("初速度を入力してください。=>");
    scanf("%lf",&v0);
    for (t = 0.2; t <= 6.001; t += 0.2) {
        y = v0 * t - (1.0 / 2) * g * t * t;
        printf("%.1f %f\n",t,y);
    }
    return 0;
}