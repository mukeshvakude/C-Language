#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome number.\n");
    else
        printf("%d is not a palindrome number.\n");

    return 0;
}

