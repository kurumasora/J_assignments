#include<stdio.h>
double exponentiation (double a,int b) {
        double result = 1; //累乗した結果を格納する変数resultの定義
        for (int i=b;i>=0;i++){
            result = a*b;
        }
            //累乗した結果を変数resultに格納する処理（既存の関数は利用しないこと）
        printf("計算結果：%lf", result);
    
