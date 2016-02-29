/*r17-2.c*/
//配列の値の表示、斜めの計算
#include <stdio.h>
int main(void) {
    int array[5][5] = {{17,24,1,8,15},
                       {23,5,7,14,16},
                       {4,6,13,20,22},
                       {10,12,19,21,3},
                       {11,18,25,2,9}};
    //5個の値の入る配列が５個
    int j, k, l, m, sum1, sum2;
    sum1 = 0;
    sum2 = 0;
    for (j=4;j>=0;j--) {
        sum1+=array[j][4-j];//右斜め上の計算
    }
    printf("%18d\n",sum1);//右斜め上の計算の結果を表示
    for (l=0;l<5;l++) {
        for (m=0;m<5;m++) {
            printf("%3d",array[l][m]);//配列内の値を表示
        }
        printf("\n");
    }
    for (k=0;k<5;k++) {
        sum2+=array[k][k];//右斜め下の計算
    }
    printf("%18d\n",sum2);//右斜め下の計算結果を表示
    return 0;
}