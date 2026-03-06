#include <stdio.h>

int main() {
	int a, b;
  	int sum = 0;
  	int seki = 1;

  	printf("１つ目の自然数を入力: ");
  	scanf("%d", &a);

  	printf("２つ目の自然数を入力: ");
  	scanf("%d", &b);

  	if (a > b) {
		int temp = a;
		a = b;
		b = temp;	
	}
	else if (a == b){
		printf("同じ自然数が入力されました！\n");
		return 0;

		
	}
	else if (a <= 0 || b <= 0){
		printf("自然数以外が入力されました！\n");
		return 0;

	}		

 	 for (int i = a; i <= b; i++) {
   		 sum += i;
   		 seki *= i;	
	}

  	printf("%d から %d までの全整数の和は %d\n", a, b, sum);
  	printf("%d から %d までの全整数の積は %d\n", a, b, seki);

  	return 0;
}

