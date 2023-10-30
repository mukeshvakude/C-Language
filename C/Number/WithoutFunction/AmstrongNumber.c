#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int isArmstrong = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

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

    if (result == num)
        isArmstrong = 1;

    if (isArmstrong) {
        printf("%d is an Armstrong number.\n");
    } else {
        printf("%d is not an Armstrong number.\n");
    }

    return 0;
}

