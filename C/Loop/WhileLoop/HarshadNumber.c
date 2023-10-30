#include <stdio.h>

int isHarshad(int num) {
    int originalNum = num;
    int sumDigits = 0;

    while (num > 0) {
        sumDigits += num % 10;
        num /= 10;
    }

    return (originalNum % sumDigits == 0);
}

int main() {
    int n, i = 1;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Harshad numbers from 1 to %d: ", n);
    while (i <= n) {
        if (isHarshad(i)) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

   

