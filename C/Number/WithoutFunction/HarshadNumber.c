//Harshad Number:
//    A Harshad number (also known as a Niven number) is an integer that is divisible by the sum of its digits.
//    In other words, a number 'N' is a Harshad number if 'N' is evenly divisible by the sum of its digits.
//    For example, 18 is a Harshad number because the sum of its digits is 1 + 8 = 9, and 18 is divisible by 9 (9 x 2 = 18).

#include <stdio.h>

int main() {
    int num, originalNum, sumDigits = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (num > 0) {
        sumDigits += num % 10;
        num /= 10;
    }

    if (originalNum % sumDigits == 0)
        printf("%d is a Harshad number.\n");
    else
        printf("%d is not a Harshad number.\n");

    return 0;
}

