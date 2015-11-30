#include <stdio.h>
int main(void) {
    int a, b, x;
    printf("a=>");
    scanf("%d",&a);
    printf("b=>");
    scanf("%d",&b);
    if (a > b) {
        x = a;
        a = b;
        b = x;
    }
    printf("a=%d b=%d\n",a,b);
    return 0;
}