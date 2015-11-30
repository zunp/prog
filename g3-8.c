#include <stdio.h>
int main(void) {
    int x;
    printf("整数x=>");
    scanf("%d",&x);
    if (x == 0) {
        printf("%dはゼロです。\n",x);
    } else if (x > 0) {
        printf("%dは正です。\n",x);
    } else if (x < 0) {
        printf("%dは負です。\n",x);
    }
    return 0;
}