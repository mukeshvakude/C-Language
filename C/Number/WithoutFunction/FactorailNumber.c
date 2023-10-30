#include <stdio.h>

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is undefined for negative numbers.\n");
        return 1;
    }

    long long factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %lld.\n", num, factorial);

    return 0;
}

