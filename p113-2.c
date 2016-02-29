/*p113-2.c*/
//インチからセンチの計算
#include <stdio.h>
int main(void) {
    double inch, cm;
    printf("inchを入力 ->");
    scanf("%lf",&inch);
    cm = inch * 2.54;
    printf("%.3finchは%.3fcmです。\n",inch,cm);
    return 0;
}