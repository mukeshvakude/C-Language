#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: "); // Input: User enters an integer
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an even number.\n"); // Output: Print if it's an even number
    } else {
        printf("%d is not an even number.\n"); // Output: Print if it's not an even number
    }

    return 0;
}

