//programname: e2-22.c
#include <stdio.h>
int main(void) {
    int a, b;
    int *p;
    a = 100;
    p = &a;
    b = *p;
    printf("aの値 = %d\t aのアドレス%x\n", a, &a);
    printf("bの値 = %d\t bのアドレス%x\n", b, &b);
    printf("pの値 = %x\t pのアドレス%x\n", p, &p);
    return 0;
}