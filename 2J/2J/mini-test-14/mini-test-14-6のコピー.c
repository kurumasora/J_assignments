#include <stdio.h>
 
int main (void) {
        int a[100][100] = {};
        int n;
        int m;
        int k;
 
        scanf("%d", &n);
        scanf("%d", &m);
 
        for (int i = 0; i < n; i++) {//行列の作成
                for (int j = 0; j < m; j++) {
                        scanf("%d", &a[i][j]);
                }
        }
 
        scanf("%d", &k);
 
 
        for (int j = 0; j < m; j++) {//jがm列まで出力
                printf("%d ", a[k][j]);//k行目を出力
        }
        printf("\n");
 
 
        return 0;
}