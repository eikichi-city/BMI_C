#include <stdio.h>
#include "sub.h"

//h:身長 w:体重 s:性別
double h,w,s;

int main(int argc,char *argv[])
{
    printf("BMI ( 体格指数 ) 法を用いて肥満度を表示するプログラム\n");
    //身長[m]を入力
    printf("身長[m] = ");
    scanf("%lf",&h);
    //体重[kg]を入力
    printf("体重[kg] = ");
    scanf("%lf",&w);
    //性別（男性：1　女性：2　男女共通：その他の数字）を入力
    printf("男性:1 女性:2 男女共通:その他 = ");
    scanf("%lf",&s);
    //標準体重を求めて表示
    std_weight(h,s);
    //BMIを求めて表示
    bmi(h,w);
    //肥満度を求めて表示
    fat(w);
    return 0;
}
