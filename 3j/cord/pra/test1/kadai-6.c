#include<stdio.h>
int main(void){
    typedef struct{
        char v[11];
        int x;
        uint y;
        double z;
    }Four;
    
    Four a;

    printf("入力\n")
    scanf("%s, %d, %u, %lf", a.v, &a.x, &a.y, &a.z,);

    char flag = "1";
    while(flag == "1"){
        if(a.v=="v"){
            printf("%s", a.v);
        }
        printf("%d", a.x);
        printf("%u", a.y);
        printf("%lf", a.z);
    }


}