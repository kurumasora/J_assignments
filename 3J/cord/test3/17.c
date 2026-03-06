#include<stdio.h>

void nisin(unsigned int x){
    unsigned int temp[32];
    for(int i = 0; i < 32; i++){
        temp[31-i] = x%2;
        x/=2;
    }
    for(int i = 0; i < 32; i++){
        printf("%d", temp[i]);
    }
   
   
}

int right_shift(unsigned int r, unsigned int n){
    for(int i = 0; i < n; i++){
        r = r/2;
    }
    return r;
   
}
int left_shift(unsigned int l, unsigned int n){
    for(int i = 0; i < n; i++){
        l = l*2;
    }
    return l;
}

int main(){
    unsigned int a,n = 0;
    printf("非負の整数を入力："); scanf("%u", &a);
    printf("シフトするビット数を入力："); scanf("%u", &n);
    printf("入力した非負の整数（括弧内は2進数）：%u（",  a ); nisin(a);printf("）\n");
    printf("シフト演算子を使って右に%uビットシフト：%u（",n, a>>n); nisin(a>>n);printf("）\n");
    printf("シフト演算子を使わず右に%uビットシフト：",n);printf("%d",right_shift(a,n));printf("（");nisin(right_shift(a,n));printf("）\n");
    printf("シフト演算子を使って左に%uビットシフト：%u（",n, a<<n);nisin(a<<n);printf("）\n");
    printf("シフト演算子を使わず左に%uビットシフト：",n);printf("%d",left_shift(a,n));printf("(");nisin(left_shift(a,n));printf(")\n");
    return 0;
    
}









