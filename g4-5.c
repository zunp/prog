#include <stdio.h>
int main(void) {
    int tate, a, s;
    tate = 22;
    a = 0;
    s = 0;
    while (s <= 685) {
        a++;
        s = tate * a;
    }
    printf("横の長さ = %d\n",a);
    printf("面積 = %d\n",s);
    return 0;
}