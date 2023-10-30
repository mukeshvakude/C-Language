#include <stdio.h>

int isPerfect(int num) {
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
        return 1;
    return 0;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPerfect(num))
        printf("%d is a perfect number.\n");
    else
        printf("%d is not a perfect number.\n");

    return 0;
}

