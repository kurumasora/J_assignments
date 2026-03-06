#include <stdio.h>

// 配列の最大値を求める関数
int findMax(int arr[], int length) {
    int max = arr[0];
    for(int i = 1; i < length; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int numbers[] = {3, 5, 7, 2, 8, -1, 4, 10, 6};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int max = findMax(numbers, length);
    printf("The maximum value is: %d\n", max);

    return 0;
}
