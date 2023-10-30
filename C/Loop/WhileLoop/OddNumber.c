#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Odd numbers from 1 to %d: ", n);
    while (i <= n) {
        printf("%d ", i);
        i += 2; // Increment by 2 to get the next odd number
    }
    printf("\n");

    return 0;
}

