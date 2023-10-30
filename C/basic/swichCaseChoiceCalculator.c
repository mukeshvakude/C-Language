#include <stdio.h>

int main() {
    char choice;
    do {
        double num1, num2, result;
        char operator;

        printf("Enter first number: ");
        scanf("%lf", &num1);
    
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);
    
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1;
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
                return 1;
        }

        printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume any newline character.
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

