#include <stdio.h>

int main() {
    int num = 234; // The number to check
    int originalNum = num; // Store the original number
    int prevDigit = num % 10; // Initialize prevDigit with the last digit
    num /= 10; // Move to the next digit

    int isIncreasing = 1; // Assume increasing order by default
    int isDecreasing = 1; // Assume decreasing order by default

    while (num > 0) {
        int currentDigit = num % 10;

        if (currentDigit > prevDigit) {
            isDecreasing = 0; // Not in decreasing order
        } else if (currentDigit < prevDigit) {
            isIncreasing = 0; // Not in increasing order
        }

        prevDigit = currentDigit;
        num /= 10;
    }

    if (isIncreasing) {
        printf("%d is in increasing order.\n", originalNum);
    } else if (isDecreasing) {
        printf("%d is in decreasing order.\n", originalNum);
    } else {
        printf("%d is neither in increasing nor in decreasing order.\n", originalNum);
    }

    return 0;
}

