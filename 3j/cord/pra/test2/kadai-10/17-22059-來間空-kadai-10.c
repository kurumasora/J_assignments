#include<stdio.h>
int main(void){
    int a,b;
    printf("変数aに格納する整数を入力してください. "); scanf("%d",&a);
    int* P = &a;//ポインタPに変数aの"アドレス"を格納//*pは"aの値"を指す
    printf("変数aの値は%d, アドレスは%pです. \n", a, P);
    printf("ポインタpに整数aのアドレスを格納します.\n");
    printf("ポインタpのアドレスは%p,値は%p, *Pの値は%dになりました.\n",&P,P,*P);
    printf("変数bに格納する整数を入力してください. "); scanf("%d",&b);
    *P = b;
    printf("変数bの値は%d, アドレスは%pです. \n", b, &P);
    printf("ポインタpの指し示すアドレスに整数bの値を格納します.\n");
    printf("ポインタpのアドレスは%p,値は%p, *Pの値は%d,\n変数aの値は%d,変数bの値は%dになりました. \n",&P,P,*P,a,b);
    return 0;




}