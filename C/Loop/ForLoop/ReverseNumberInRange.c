	#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed;
}

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Reversed numbers from 1 to %d: ", n);
    for (int i = 1; i <= n; i++) {
        int reversed = reverseNumber(i);
        printf("%d ", reversed);
    }
    printf("\n");

    return 0;
}

