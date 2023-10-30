#include <stdio.h>

long long factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial is undefined for negative numbers.\n");
    else
        printf("Factorial of %d is %lld.\n", num, factorial(num));

    return 0;
}

