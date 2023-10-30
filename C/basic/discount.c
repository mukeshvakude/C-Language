#include <stdio.h>

int main() {
    double amount, discount, finalPrice;
    printf("Enter the purchase amount: $");
    scanf("%lf", &amount);

    if (amount < 0) {
        printf("Invalid amount.\n");
    } else if (amount >= 100) {
        discount = 0.1 * amount; // 10% discount
        finalPrice = amount - discount;
        printf("Discount applied: $%.2lf\n", discount);
        printf("Final price: $%.2lf\n", finalPrice);
    } else {
        finalPrice = amount;
        printf("No discount applied. Final price: $%.2lf\n", finalPrice);
    }

    return 0;
}

