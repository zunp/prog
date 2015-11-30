#include <stdio.h>
int main(void) {
    int x;
    printf("西暦の年数=>");
    scanf("%d",&x);
    if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
        printf("%d年はうるう年です。\n",x);
    } else {
        printf("%d年はうるう年ではありません。\n",x);
    }
    return 0;
}