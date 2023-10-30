#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime if the number is less than or equal to 1

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime if it's divisible by any number
    }
    return 1; // It's prime
}

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

