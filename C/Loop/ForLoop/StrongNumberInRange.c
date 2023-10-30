#include <stdio.h>

int isStrong(int num) {
    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }

    return (sum == original);
}

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

