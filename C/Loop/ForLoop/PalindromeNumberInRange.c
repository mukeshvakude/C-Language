#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (original == reversed);
}

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Palindrome numbers from 1 to %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

