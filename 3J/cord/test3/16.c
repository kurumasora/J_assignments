#include<stdio.h>
void conversion(unsigned int x){
    unsigned int temp[32];
    for(int i = 0; i < 32; i++){
        temp[31-i] = x%2;
        x/=2;
    }
    for(int i = 0; i < 32; i++){
        printf("%d", temp[i]);
    }
}


int main(){
    unsigned int a,b;
    printf("非負の整数を２つ入力\n");
    printf("a : ");scanf("%u",&a);
    printf("b : ");scanf("%u",&b);
    printf("a     = ");conversion(a); printf("\n");
    printf("b     = ");conversion(b); printf("\n");
    printf("a & b = ");conversion(a&b); printf("\n");
    printf("a | b = ");conversion(a|b); printf("\n");
    printf("a ^ b = ");conversion(a^b); printf("\n");
    printf("~a    = ");conversion(~a);printf("\n");
    printf("~b    = ");conversion(~b);printf("\n");
    return 0;

}