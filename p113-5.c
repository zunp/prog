#include <stdio.h>
#include <string.h>
int main(void) {
    int i;
    char moji[81];
    printf("文字を入力(半角)->");
    scanf("%s",moji);
    printf("%s\n",moji);
    for (i=strlen(moji);i>=0;i--) {
        printf("%c",moji[i]);
    }
    printf("\n");
    return 0;
}