//programname: c2-6.c
#include <stdio.h>
int main(void) {
    char str[256];
    char *p;
    p = str;
    printf("文字列は？\n");
    gets(str);
    printf("変換前 = %s\n", str);
    while (*p != '\0') {
        if ((*p < 'a' || *p > 'z') && (*p < 'A' || *p > 'Z')) {
            *p = '?';
        }
        *p++;
    }
    printf("変換後 = %s\n", str);
    return 0;
}