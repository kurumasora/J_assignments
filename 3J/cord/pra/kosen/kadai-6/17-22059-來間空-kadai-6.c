#include<stdio.h>
double saidie(double x, double y, double z){
	double max = x;
	if(y > max){
		max = y;
	}
	else if(z > max){
		max = z;
	}
	return max;
}

double saisho(double x, double y, double z){
	double min = x;
	if(y < min){
		min = y;
	}
	else if(z < min){
		min = z;
	}
	return min;
}
double ghokei(double x, double y, double z){
	double sum = 0;
	sum = x + y + z;
	return sum;
}

double heykin(double x, double y, double z){
	double ave = 0;
	ave = ghokei(x,y,z)/3;
	return ave;
}

int main(void){
	double x = 0;
	double y = 0;
	double z = 0;
	int n = 0;
	printf("１つ目の数値を入力:");
	scanf("%lf",&x);
	printf("２つ目の数値入力：");
	scanf("%lf",&y);
	printf("３つ目の数値入力：");
	scanf("%lf",&z);
	printf("処理を入力。0:最大、1:最小、2:合計、3:平均:");
	scanf("%d",&n);
	if(n == 0){
		printf("%lf\n",saidie(x, y, z));
	}else if(n == 1){		
		printf("%lf\n",saisho(x, y, z));
	}else if(n == 2){
		printf("%lf\n",ghokei(x, y, z));
	}else if(n == 3){
		printf("%lf\n",heykin(x, y, z));

	}else{
		printf("入力が正しくありません\n");
	}

	return 0;
}


