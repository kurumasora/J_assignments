#include <stdio.h>
int main(){
    int n;
    int a[] = {};
    scanf("%d",&n);
    for(int i= 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        printf("%d",a[n-j-1]);
    }
    printf("\n");
    return 0;
}