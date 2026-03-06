#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
    // double型の配列を用意し、memcpyとmemcmpを使用して動作を確認する
    double srcArray[] = {1.5, 2.5, 3.5};
    double destArray[3];
 
    // srcArrayをdestArrayにコピーする
    memcpy(destArray, srcArray, sizeof(srcArray));
 
    // コピーが正しく行われたかを確認するためにmemcmpを使用する
    if (memcmp(destArray, srcArray, sizeof(srcArray)) == 0) {
        printf("memcpyでのコピーは正しく行われました。\n");
    } else {
        printf("memcpyでのコピーは正しく行われませんでした。\n");
    }
 
    // コピー元の配列の全体をmemsetで10に埋める
    memset(srcArray, 10, sizeof(srcArray));
 
    // コピー元とコピー先の比較を再度行う
    if (memcmp(destArray, srcArray, sizeof(srcArray)) != 0) {
        printf("memset後、memcmpで異なる値が確認されました。\n");
    } else {
        printf("memset後、memcmpで同じ値が確認されました。\n");
    }
 
    // mallocを使用してdouble型の値が3つ格納可能な配列を作成し、全体に1を格納する
    double *dynamicArray = (double *)malloc(3 * sizeof(double));
    if (dynamicArray == NULL) {
        printf("メモリの確保に失敗しました。\n");
        return 1;
    }
 
    // 全体に1を格納する
    for (int i = 0; i < 3; i++) {
        dynamicArray[i] = 1.0;
    }
 
    // callocを使用してunsigned int型の値が2つ格納可能な配列を作成し、全体の値を表示する
    unsigned int *callocArray = (unsigned int *)calloc(2, sizeof(unsigned int));
    if (callocArray == NULL) {
        printf("メモリの確保に失敗しました。\n");
        return 1;
    }
 
    // 全体の値を表示する
    printf("callocで確保した配列の全体の値は:\n");
    for (int i = 0; i < 2; i++) {
        printf("%u\n", callocArray[i]);
    }
 
    // メモリの解放
    free(dynamicArray);
    free(callocArray);
 
    return 0;
}