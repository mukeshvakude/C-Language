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
    int n, i = 1;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Palindrome numbers from 1 to %d: ", n);
    while (i <= n) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}

