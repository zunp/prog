#include <stdio.h>
int main(void) {
    int a, i, sum;
    while (1) {
        printf("整数aを入力=>");
        scanf("%d",&a);
        sum = 1;
        if (a <= 0) {
            break;
        } else {
            for(i = 1; i <= a; i++) {
                sum *= i;
            }
            printf("%d!=%d\n",a,sum);
            sum = 1;
        }
    }
    return 0;
}