#include <stdio.h>

int main() {
    int num;
    int isStrong = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    
    if (sum == original)
        isStrong = 1;

    if (isStrong) {
        printf("%d is a strong number.\n");
    } else {
        printf("%d is not a strong number.\n");
    }

    return 0;
}

