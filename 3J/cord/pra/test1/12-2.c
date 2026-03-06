#include<stdio.h>
typedef struct{
        int x;
        long y;
        double z;
    }number;

int main(){
    
    number s;
    scanf("%d\n", &s.x);
    scanf("%ld\n",&s.y);
    scanf("%lf\n",&s.z);
    printf("値を返す");
    printf("%d\n",s.x);
    printf("%ld\n",s.y);
    printf("%lf\n",s.z);
    return 0;
}