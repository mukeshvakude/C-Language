
//For example, 5 is an automorphic number because 5^2 = 25, and 25 ends with 5. 
//Similarly, 76 is an automorphic number because 76^2 = 5776, and 5776 ends with 76. 


#include <stdio.h>

int main() {
    int num, square, lastDigits, originalNum;

    printf("Enter an integer: "); // Input: User enters an integer
    scanf("%d", &num);
    originalNum = num;

    square = num * num;

    int count = 1;
    while (num > 0) {
        count *= 10;
        num /= 10;
    }

    lastDigits = square % count;

    if (lastDigits == originalNum) {
        printf("%d is an automorphic number.\n"); // Output: Print if it's an automorphic number
    } else {
        printf("%d is not an automorphic number.\n"); // Output: Print if it's not an automorphic number
    }

    return 0;
}

