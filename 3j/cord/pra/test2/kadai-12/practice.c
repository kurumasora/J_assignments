#include<stdio.h>
#include<string.h>

int main(){
    double a[3] = {1.1, 2.2, 3.3};
    double b[] = {};
    memcpy(a, b, sizeof(a));
    int r = memcmp(a, b, sizeof(a));
    if(r == 0){
        printf("正しい\n");
    }
    else if(r != 0){
        printf("正しくない\n");
    }

    memset(a, 10,sizeof(a));
    int l = memcmp(a, b, sizeof(a));
    if(l == 0){
        printf("正しい\n");
    }
    else if(r != 0){
        printf("正しくない\n");
    }

    return 0;
}