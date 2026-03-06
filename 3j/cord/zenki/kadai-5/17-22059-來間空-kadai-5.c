#include<stdio.h>
void wa(int ,int);
void sa(int ,int);
void seki(int ,int);
void syou(int ,int);
void amari(int ,int);

int main(void){
	int a = 0;
	int b = 0;
	int c = 0;
	printf("１つ目の整数を入力：");
	scanf("%d",&a);
	printf("２つ目の整数の入力：");
	scanf("%d",&b);
	printf("計算方法を入力。0:和、1:差、2:積、3:商　4:剰余:");
	scanf("%d",&c);
	if(c == 0){
		wa(a, b);
	}else if(c == 1){		
		 sa(a, b);
	}else if(c == 2){
		seki(a, b);
	}else if(c == 3){
		 syou(a, b);
	}else if(c == 4){
		 amari(a, b);
	}else{
		printf("入力が正しくありません\n");
	}
	return 0;
}



void wa(int a, int b ){
	printf("%d\n",a + b);
}
void sa(int a, int b ){
	printf("%d\n",a - b);
}
void seki(int a, int b ){
	printf("%d\n",a * b);
}
void syou(int a, int b ){
	printf("%d\n",a / b);
}
void amari(int a, int b ){
	printf("%d\n",a % b);
}
