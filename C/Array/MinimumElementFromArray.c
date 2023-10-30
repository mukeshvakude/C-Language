#include <stdio.h>

int main() {
    int arr[] = {12, 45, 89, 6, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i , min = arr[0];

    for ( i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The minimum element in the array is: %d\n", min);

    return 0;
}

