//For example, let's say you have two numbers, 12 and 18. The divisors of 12 are 1, 2, 3, 4, 6, and 12.
//The divisors of 18 are 1, 2, 3, 6, 9, and 18. 
//The largest number that is a divisor of both 12 and 18 is 6. Therefore, the GCD of 12 and 18 is 6.


#include <stdio.h>

int main() {
    int num1, num2 ,i;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int gcd;
    for ( i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}

