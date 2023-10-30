
//For example, let's consider two numbers, 4 and 6. The multiples of 4 are 4, 8, 12, 16, 20, and so on. 
//The multiples of 6 are 6, 12, 18, 24, 30, and so on.
//The smallest number that appears in both lists is 12. Therefore, the LCM of 4 and 6 is 12.

#include <stdio.h>

// Function to calculate the GCD (Greatest Common Divisor) of two numbers
int gcd(int num1, int num2) {
    int gcd ,i;
    for ( i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

// Function to calculate the LCM (Least Common Multiple) of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, result);

    return 0;
}

