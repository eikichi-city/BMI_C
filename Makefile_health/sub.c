#include <stdio.h>
#include "sub.h"

//main.cでは現れない関数
//性別による標準BMIを与える関数
//引数sはset_weight関数内で与えられ、これはmain.cで入力されるsに相当する
static double std_BMI(double s)
{
    //男性
    if(s==1)
        sb=22;
    //女性
    else if(s==2)
        sb=21;
    //男女共通
    else
        sb=21.5;
    return sb;
}

// 標準体重を求めて表示する関数
//引数h,sはmain.c内で入力される身長ｈ[m]、性別ｓに相当する
double std_weight(double h,double s)
{
    //標準BMI：sbを求める
    std_BMI(s);
    //（標準体重）＝（身長[m]）^2 *（標準BMI）
    sw=h*h*sb;
    //表示
    printf("標準体重[kg] = %lf\n",sw);
}

//main.cでは現れない関数
//肥満度の判定をする関数
//引数fはset_weight関数内で与えられる
static void judge(int f)
{
    //肥満度10以上なら太り過ぎ
    if(f>=10)
        printf("太り過ぎ\n");
    //肥満度-10以下あら痩せすぎ
    else if(f<=-10)
        printf("痩せすぎ\n");
    //肥満度-10以上10未満なら標準
    else
        printf("標準\n");
}

//肥満度を求めて表示する関数
//引数wはmain.c内で入力される体重w[kg]に相当する
double fat(double w)
{
    //（肥満度）＝ {（体重[kg]）/（（標準体重[kg]）-1）}*100 
    f=(w/sw-1)*100;
    //表示
    printf("肥満度[％] = %lf\n",f);
    //肥満度の判定
    judge(f);
}

//BMIを求めて表示する関数
//引数h,wはmain.c内で入力される身長ｈ[m]、体重ｗ[kg]に相当する
double bmi(double h,double w)
{
    //（BMI）＝（体重[kg]）/ (身長[m])＾2
    b=w/h/h;
    //表示
    printf("BMI = %lf\n",b);
}
