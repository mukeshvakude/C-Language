#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int i , size = sizeof(arr) / sizeof(arr[0]);

    for ( i = 0; i < size / 2; i++) {
        // Swap elements arr[i] and arr[size - 1 - i]
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    // The 'arr' array is now reversed in place

    // You can print the reversed array here if needed
    printf("Reversed array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

