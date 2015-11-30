#include <stdio.h>
int main(void) {
    int n, keisan;
    printf("DVDの枚数=>");
    scanf("%d",&n);
    if (n > 20) {
        keisan = n * 200;
    } else {
        keisan = n * 250;
    }
    printf("購入金額=%d\n",keisan);
    return 0;
}