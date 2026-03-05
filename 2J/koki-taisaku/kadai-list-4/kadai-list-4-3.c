#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n >= 1){
        while(n >= 0){
            printf("%d\n",n);
            n = n-1;            
        }
    }
    return 0;
}