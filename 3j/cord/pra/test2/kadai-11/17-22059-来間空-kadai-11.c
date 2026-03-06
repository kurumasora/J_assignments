#include <stdio.h>

// 最大値
void findMax(float arr[], int size, float *max) {
    *max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > *max) {
            *max = arr[i];
        }
    }
}

// 最小値
void findMin(float *arr, int size, float *min) {
    *min = *arr;
    for(int i = 1; i < size; i++) {
        if(*(arr + i) < *min) {
            *min = *(arr + i);
        }
    }
}

// 合計値
void findSum(float *arr, int size, float *sum) {
    *sum = 0;
    for(int i = 0; i < size; i++) {
        *sum += *(arr + i);
    }
}

// 平均値
void findAvg(float *arr, int size, float *avg) {
    *avg = 0;
    for(int i = 0; i < size; i++) {
        *avg += arr[i];
    }
    *avg /= size;
}

int main() {
    int n;
    printf("1以上5以下の整数を入力してください: ");
    scanf("%d", &n);

    if(n < 1 || n > 5) {
        printf("無効な入力です。\n");
        return 1;
    }

    float numbers[n];
    printf("%d個の数値を入力してください:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
    }

    float max, min, sum, avg;
    findMax(numbers, n, &max);
    findMin(numbers, n, &min);
    findSum(numbers, n, &sum);
    findAvg(numbers, n, &avg);

    printf("最大値: %.2f\n", max);
    printf("最小値: %.2f\n", min);
    printf("合計値: %.2f\n", sum);
    printf("平均値: %.2f\n", avg);

    return 0;
}

