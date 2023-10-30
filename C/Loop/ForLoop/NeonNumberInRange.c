#include <stdio.h>

int isNeon(int num) {
    int square = num * num;
    int sumDigits = 0;

    while (square > 0) {
        sumDigits += square % 10;
        square /= 10;
    }

    return (sumDigits == num);
}

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Neon numbers from 1 to %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (isNeon(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

