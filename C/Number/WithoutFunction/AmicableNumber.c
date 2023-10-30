//Here's an example of an amicable pair:
//
//    Number 220:
//        The proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, and 110.
//        The sum of these divisors is 284.
//
//    Number 284:
//        The proper divisors of 284 are 1, 2, 4, 71, and 142.
//        The sum of these divisors is 220.
//
//So, (220, 284) is an amicable pair because the sum of divisors of 220 is 284, and the sum of divisors of 284 is 220

#include <stdio.h>

int main() {
    int num1, num2, sumDiv1 = 0, sumDiv2 = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= num1 / 2; i++) {
        if (num1 % i == 0)
            sumDiv1 += i;
    }

    for (int i = 1; i <= num2 / 2; i++) {
        if (num2 % i == 0)
            sumDiv2 += i;
    }

    if (sumDiv1 == num2 && sumDiv2 == num1)
        printf("%d and %d are amicable numbers.\n");
    else
        printf("%d and %d are not amicable numbers.\n");

    return 0;
}

