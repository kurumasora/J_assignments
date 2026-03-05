#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a%b){
        printf("no\n");
    }else if(a%b==0){
        printf("yes\n");
    }
return 0;

}