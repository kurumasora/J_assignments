#include<stdio.h>
int main(){
	int n = 120;
	typedef struct {
		int a;
	}kouzou;

	 kouzou A = {0};
	 kouzou b = {0};	
	 kouzou c = {0};
     kouzou d = {0};
	 kouzou e = {0};

	kouzou h[] = {A,b,c,d,e};

	int hai[5][4][3][2] = {0};
	for(int i = 0; i <= 4; i++){
		for(int j = 0; j <= 3; j++){	
			for(int k = 0; k <= 2; k++){
				for(int l = 0; l <= 1; l++){
					hai[i][j][k][l] = n;
					n--;
				}
			}
		}
	}		
	for(int i = 0; i <= 4; i++){
		for(int j = 0; j <= 3; j++){	
			for(int k = 0; k <= 2; k++){
				for(int l = 0; l <= 1; l++){
  	                                printf("[%d][%d][%d][%d]:%d\n",i,j,k,l,hai[i][j][k][l]);
					n--;
				}
			}
		}
	}
	return 0;
}

					
