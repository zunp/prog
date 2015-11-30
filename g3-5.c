#include <stdio.h>
int main(void) {
    int a, b, s;
    printf("a=>");
    scanf("%d",&a);
    printf("b=>");
    scanf("%d",&b);
    if (a > b) {
        s = a - b;
    } else if (b > a) {
        s = b - a;
    }
    printf("差 s=%d\n",s);
    return 0;
}