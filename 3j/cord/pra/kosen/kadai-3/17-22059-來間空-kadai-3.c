#include <stdio.h>
int main(){
	struct Human{
		char name[100];
		int old;
	};

	struct Human a;


	printf("氏名："); scanf("%s", a.name);
	printf("年齢："); scanf("%d", &a.old);

	printf("%s%s\n",a.name, a.old >= 18 ? "は成年です！" : "は未成年です！");

	return 0;
}

