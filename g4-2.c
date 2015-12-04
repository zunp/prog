#include <stdio.h>
int main(void) {
    int n, i, wa;
    wa = 0;
    n = 1;
    i = 1;
    while (n <= 10000) {
        n = n * 2;
        i++;
    }
    printf("%d 日目に %d 円になります。\n",i,n);
    return 0;
}