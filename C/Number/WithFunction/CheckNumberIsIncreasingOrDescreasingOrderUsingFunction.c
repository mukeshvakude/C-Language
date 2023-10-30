#include <stdio.h>

// Function to check if a number is in increasing or decreasing order
int checkOrder(int num) {
    int prevDigit = num % 10;
    num /= 10;
    int isIncreasing = 1;
    int isDecreasing = 1;

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
        return 1; // In increasing order
    } else if (isDecreasing) {
        return -1; // In decreasing order
    } else {
        return 0; // Neither increasing nor decreasing order
    }
}

int main() {
    int num = 234; // The number to check

    int order = checkOrder(num);

    if (order == 1) {
        printf("%d is in increasing order.\n", num);
    } else if (order == -1) {
        printf("%d is in decreasing order.\n", num);
    } else {
        printf("%d is neither in increasing nor in decreasing order.\n", num);
    }

    return 0;
}

