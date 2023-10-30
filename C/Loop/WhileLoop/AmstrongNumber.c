#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num;
    int result = 0;
    int n = 0;

    int temp = originalNum;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = originalNum;
    while (temp != 0) {
        int remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    return (result == num);
}

int main() {
    int n, i = 1;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d: ", n);
    while (i <= n) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}

