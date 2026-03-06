#include <stdio.h>

// 素数判定関数
int isPrime(int num) {
    if(num <= 1) return 0;
    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if(isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
