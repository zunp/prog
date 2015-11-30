#include <stdio.h>
int main(void) {
    int x, y, z, max;
    printf("x y z=>");
    scanf("%d,%d,%d",&x,&y,&z);
    if (x > y) {
        if (x > z) {
            max = x;
        } else {
            max = z;
        }
    } else {
        if (y > z) {
            max = y;
        } else {
            max = z;
        }
    }
    printf("最大値=%d\n",max);
    return 0;
}