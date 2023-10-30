#include <stdio.h>

int sumDivisors(int num, int divisor) {
    if (divisor == 1)
        return 1; // The sum of divisors is 1 for perfect numbers
    if (num % divisor == 0)
        return divisor + sumDivisors(num, divisor - 1); // Add the divisor
    return sumDivisors(num, divisor - 1); // Check the next divisor
}

int isPerfect(int num) {
    return (sumDivisors(num, num - 1) == num);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPerfect(num)) {
        printf("%d is a perfect number.\n");
    } else {
        printf("%d is not a perfect number.\n");
    }

    return 0;
}

