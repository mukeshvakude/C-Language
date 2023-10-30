#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int isStrong(int num) {
    int original = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == original;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isStrong(num))
        printf("%d is a strong number.\n");
    else
        printf("%d is not a strong number.\n");

    return 0;
}

