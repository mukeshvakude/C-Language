#include <stdio.h>

int isPerfect(int num) {
    int sum = 1;
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) {
            if (i * i != num)
                sum = sum + i + num / i;
            else
                sum = sum + i;
        }
        i++;
    }
    return (sum == num && num != 1);
}

int main() {
    int n, i = 2;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Perfect numbers from 1 to %d: ", n);
    while (i <= n) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}

