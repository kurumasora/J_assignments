#include <stdio.h>

typedef struct {
    int a;
    int b;
} mykozou;

mykozou exchange(mykozou s) {
    int temp = s.a;
    s.a = s.b;
    s.b = temp;
    return s;
}

int main() {
    
    // 構造体変数を定義
    mykozou s = {1, 2};
    
    printf("初期値: a = %d, b = %d\n", s.a, s.b);
    
    // メンバの値を入れ替える
    mykozou koukan = exchange(s);
    
    printf("交換後: a = %d, b = %d\n", koukan.a, koukan.b);
    
    return 0;
}
