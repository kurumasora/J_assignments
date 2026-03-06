#include<stdio.h>
int main(){
	typedef struct{
		char v[11];
		int x;
		unsigned int y;
		double z;
	} Four;

	Four a;
	printf("char型、int型、unsigned int型、double型の順に値を入力\n");
	scanf("%s %d %u %lf",a.v,&a.x,&a.y,&a.z);//文字列は”＆”をつける必要がない
	
	char flag = '1';
	while (flag != '0'){
		printf("値を表示するメンバ名の入力：");
		scanf(" %c", &flag);//%cは前にスペースをあける
		if(flag == 'v'){
			printf("char型のメンバの値ｖの値：%s\n",a.v);
		}else if(flag == 'x'){
			printf("int型のメンバｘの値：%d\n",a.x);
		}else if(flag == 'y'){
			printf("unsigned int型のメンバｙの値：%u\n",a.y);
		}else if(flag == 'z'){
			printf("double型のメンバｚの値：%lf\n",a.z);
		}else {printf("表示終了\n"); flag = '0';}
	}
	return 0;
	}



