#include <stdio.h>
int main(void) {
    int n, i, wa;
    wa = 0;
    n = 1;
    i = 1;
    while (n <= 1000000) {
        n *= 2;
        i++;
        wa += n;
    }
    printf("%d 日目に %d 円を貯金して %d 円になります。\n",i,n,wa);
    return 0;
}