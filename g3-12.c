#include <stdio.h>
int main(void) {
    int t;
    printf("時刻t=>");
    scanf("%d",&t);
    if (t >= 0) {
        if (t <= 12) {
            printf("おはようございます\n");
        } else if (t <= 18) {
            printf("こんにちは\n");
        } else if (t <= 23) {
            printf("こんばんは\n");
        } else {
            printf("入力時刻の誤り\n");
        }
    }
    return 0;
}