#include <stdio.h>

int factorial(int digit) {
    if (digit == 0)
        return 1;
    return digit * factorial(digit - 1);
}

int sumFactorialDigits(int num) {
    if (num == 0)
        return 0;
    int digit = num % 10;
    return factorial(digit) + sumFactorialDigits(num / 10);
}

int isStrong(int num) {
    return (sumFactorialDigits(num) == num);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isStrong(num)) {
        printf("%d is a strong number.\n");
    } else {
        printf("%d is not a strong number.\n");
    }

    return 0;
}

