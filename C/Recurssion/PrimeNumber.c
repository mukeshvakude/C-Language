#include <stdio.h>

int isPrime(int num, int divisor) {
    if (divisor == 1)
        return 1; // It's prime if we've reached 1 without finding divisors
    if (num % divisor == 0)
        return 0; // Not prime if it's divisible by a divisor other than 1
    return isPrime(num, divisor - 1); // Check the next divisor
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num, num - 1)) {
        printf("%d is a prime number.\n");
    } else {
        printf("%d is not a prime number.\n");
    }

    return 0;
}

