#include <stdio.h>

int main() {
    int num;
    int isPrime = 1;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n");
    } else {
        printf("%d is not a prime number.\n");
    }

    return 0;
}

