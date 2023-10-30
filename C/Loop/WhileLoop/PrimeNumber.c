#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime if the number is less than or equal to 1

    int i = 2;
    while (i * i <= num) {
        if (num % i == 0)
            return 0; // Not prime if it's divisible by any number
        i++;
    }
    return 1; // It's prime
}

int main() {
    int n, i = 2;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d: ", n);
    while (i <= n) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}

