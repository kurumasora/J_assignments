#include <stdio.h>

// フィボナッチ数列を計算する関数
int fibonacci(int n) {
    if(n <= 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int position;
    printf("Enter the position in Fibonacci sequence: ");
    scanf("%d", &position);

    int result = fibonacci(position);
    printf("The Fibonacci number at position %d is: %d\n", position, result);

    return 0;
}
