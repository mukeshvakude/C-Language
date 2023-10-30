#include <stdio.h>

int isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (i * i != num)
                sum = sum + i + num / i;
            else
                sum = sum + i;
        }
    }
    return (sum == num && num != 1);
}

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Perfect numbers from 1 to %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

