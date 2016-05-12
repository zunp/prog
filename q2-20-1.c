//programname: q2-20-1.c
#include <stdio.h>
int main(void) {
    char str1[256], str2[256], *p;
    int i = 0;
    printf("文字列を入力してください。\n");
    gets(str1);
    p = str1;
    while (*p != '\0') {
        str2[i++] = *p++;
    }
    str2[i] = '\0';
    printf("str2 = %s\n", str2);
    return 0;
}