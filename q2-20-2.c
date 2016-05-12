//programname: q2-20-2.c
#include <stdio.h>
#include <string.h>
int main(void) {
    char str[256];
    int i, j;
    printf("文字列を入力してください\n");
    gets(str);
    i = strlen(str);
    while (i > 0) {
        i--;
        printf("%c",str[i]);
    }
    putchar('\n');
    return 0;
}