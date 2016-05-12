//programname: e2-25.c
#include <stdio.h>
int main(void) {
    char str[256];
    char *p;
    printf("文字列を入力してください。\n");
    gets(str);
    p = str;
    while (*p != '\0') {
        p++;
    }
    while (p > str) {
        p--;
        putchar(*p);
    }
    putchar('\n');
    return 0;
}