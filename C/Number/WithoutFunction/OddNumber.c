#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: "); // Input: User enters an integer
    scanf("%d", &num);

    if (num % 2 != 0) {
        printf("%d is an odd number.\n"); // Output: Print if it's an odd number
    } else {
        printf("%d is not an odd number.\n"); // Output: Print if it's not an odd number
    }

    return 0;
}

