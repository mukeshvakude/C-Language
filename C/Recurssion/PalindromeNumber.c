#include <stdio.h>

int reverseNumber(int num, int reversed) {
    if (num == 0)
        return reversed;
    int digit = num % 10;
    reversed = reversed * 10 + digit;
    return reverseNumber(num / 10, reversed);
}

int isPalindrome(int num) {
    return (num == reverseNumber(num, 0));
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n");
    } else {
        printf("%d is not a palindrome number.\n");
    }

    return 0;
}

