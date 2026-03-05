#include <stdio.h>
int main(void){
    int n, v, a;
    int t[100] = {0};//配列の初期化
    scanf("%d", &n);
    if (!(n >= 0 &&n <= 100)){ //nが０以上１００以下出ない時
        return 0;//programm is finished
    }
    scanf("%d" ,&v);

    for (int i = 1;i <= n;i++){
        scanf("%d", &a);
        if (a >= 0 && a <10)//aが0以上１０未満なら
            t[i] = a;//put a in t[i]
        }
    }
    for (int i = n;i> 0;i--){//iをnとおいて（n桁まで），iが０より大きいときは一つずつひく(一の位にvを足す)
        t[i] += v;//整数値vとt[i]を足したのをt[i]に代入
        if (t[i] >= 10){//t[i]が１０以上（繰上げ操作）
            t[1]-=10;//t[i]-10をt[i]に代入
            v=1;
        }
        else {
            v =0;
        }
    }
    if (v == 1){
        printf("1");
    }
    
    for (int i = 1;i <= n;i++){
        printf("%d", t[i]);
    }
    return 0;
}


    
