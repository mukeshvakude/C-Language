#include <stdio.h>

int main() {
    double num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("%.2lf is the largest.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%.2lf is the largest.\n", num2);
    } else {
        printf("%.2lf is the largest.\n", num3);
    }

    return 0;
}

