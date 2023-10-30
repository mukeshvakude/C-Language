//Neon Number:
//
//    A Neon number is a specific type of Harshad number.
//    A Neon number is an integer where the sum of its digits, when squared, equals the original number.
//    In other words, a number 'N' is a Neon number if the square of the sum of its digits is equal to 'N'.
//    For example, 9 is a Neon number because the sum of its digits is 9 (9), and 9^2 (81) is equal to the original number (9).

#include <stdio.h>

int main() {
    int num, square, sumDigits = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    square = num * num;

    while (square > 0) {
        sumDigits += square % 10;
        square /= 10;
    }

    if (sumDigits == num)
        printf("%d is a neon number.\n");
    else
        printf("%d is not a neon number.\n");

    return 0;
}

