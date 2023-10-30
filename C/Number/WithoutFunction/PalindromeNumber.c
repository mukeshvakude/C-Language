#include <stdio.h>

int main() {
    int num;
    int isPalindrome = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);
    int original = num;
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original != reversed)
        isPalindrome = 0;

    if (isPalindrome) {
        printf("%d is a palindrome number.\n");
    } else {
        printf("%d is not a palindrome number.\n");
    }

    return 0;
}

