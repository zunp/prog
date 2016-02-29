#include <stdio.h>
int main(void) {
    int kwh,sum,a;
    while (1) {
        printf("kW/h ->");
        scanf("%d",&kwh);
        if (kwh < 0) {
            break;
        }
        sum = 546;
        if (kwh == 0) {
            sum /= 2;
        } else if (kwh <= 120) {
            sum += 18*120;
        } else if (kwh <= 300) {
            sum += 18*120+23*(kwh-120);
        } else {
            sum += 18*120+23*(kwh-120)+25*(kwh-300);
        }
        printf("%d\n",sum);
    }
    return 0;
}