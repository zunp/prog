#include <stdio.h>
int main(void) {
    int a, b, c;
    printf("最大辺a=>");
    scanf("%d",&a);
    printf("b=>");
    scanf("%d",&b);
    printf("c=>");
    scanf("%d",&c);
    a *= a;
    b *= b;
    c *= c;
    if (a == b + c) {
        printf("直角\n");
    } else if (a > b + c) {
        printf("鈍角\n");
    } else if (a < b + c) {
        printf("鋭角\n");
    }
    return 0;
}