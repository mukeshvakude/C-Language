#include <stdio.h>

int main() {
    int num;
    int isPerfect = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (i * i != num)
                sum = sum + i + num / i;
            else
                sum = sum + i;
        }
    }
    
    if (sum == num && num != 1)
        isPerfect = 1;

    if (isPerfect) {
        printf("%d is a perfect number.\n");
    } else {
        printf("%d is not a perfect number.\n");
    }

    return 0;
}

