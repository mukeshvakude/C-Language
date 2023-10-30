#include <stdio.h>

int main() {
    int arr[] = {12, 45, 89, 6, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i , sum = 0;

    for ( i = 0; i < size; i++) {
        sum += arr[i];
    }

    float average = (float)sum / size;

    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}

