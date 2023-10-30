#include <stdio.h>

int main() {
    int arr[] = {12, 45, 89, 6, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, max = arr[0];

    for ( i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", max);

    return 0;
}

