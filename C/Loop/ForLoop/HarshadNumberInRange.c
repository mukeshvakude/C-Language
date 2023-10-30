#include <stdio.h>

int isHarshad(int num) {
    int originalNum = num;
    int sumDigits = 0;

    while (num > 0) {
        sumDigits += num % 10;
        num /= 10;
    }

    return (originalNum % sumDigits == 0);
}

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Harshad numbers from 1 to %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (isHarshad(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

