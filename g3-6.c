#include <stdio.h>
int main(void) {
    int s;
    printf("s=>");
    scanf("%d",&s);
    if (s % 2 == 0) {
        printf("偶数\n");
    } else {
        printf("奇数\n");
    }
    return 0;
}