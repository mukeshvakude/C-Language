#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    if (num == 0)
        return 0;
    return 1 + countDigits(num / 10);
}

int isArmstrong(int num, int n) {
    if (num == 0)
        return 0;

    int digit = num % 10;
    return pow(digit, n) + isArmstrong(num / 10, n);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int n = countDigits(num);
    int result = isArmstrong(num, n);

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

