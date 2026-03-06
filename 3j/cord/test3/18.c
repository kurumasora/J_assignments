#include <stdio.h>

// 適正体重の定数をマクロ定数として定義
#define appropriate_constant 22.0

// BMIを計算するマクロ関数
#define BMI(w, h) ((w) / square(h))

// 条件付きコンパイルの利用
#ifdef DEBUG
    #define DEBUG_PRINT(x) printf("DEBUG: %s\n", x)
#else
    #define DEBUG_PRINT(x)
#endif

// 身長の二乗を計算するマクロ関数の定義
#define square(x) ((x) * (x))

int main() {
    // 身長と体重の入力の取得
    double weight, height;
    printf("BMIを計算します\n");
    printf("体重を入力（kg）: ");scanf("%lf", &weight);
    printf("身長を入力（m） : ");scanf("%lf", &height);

    // BMIの計算
    double bmi = BMI(weight, height);
    printf("BMIは%lfです\n", bmi);
    //適正体重の計算
    printf("適正体重を計算します\n");
    //マクロ定数とsquare関数を利用して適正体重を計算
    double aw = appropriate_constant * square(height);
    printf("適正体重は%lfです\n", aw);
    // BMIの評価
    if (bmi > aw) {
        printf("もっと痩せよう\n");
    } else if(bmi < aw){
        printf("もっと食べよう\n");
    } else{
        printf("ちょうどいいね\n");
    }

    // 定義済みマクロ定数の利用し日付と時刻を表示
    printf("BMI測定は%sの%sに行われました\n", __DATE__, __TIME__);

    // 条件付きコンパイルの利用
    DEBUG_PRINT("デバッグメッセージ");

    return 0;
}