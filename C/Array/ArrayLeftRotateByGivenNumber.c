#include <stdio.h>

void leftRotateByOne(int arr[], int size) {
    int temp = arr[0];
    int i;
    for ( i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int rotations = 2;  // Number of left rotations
	int i;
    for ( i = 0; i < rotations; i++) {
        leftRotateByOne(arr, size);
    }

    printf("Array after %d left rotations: ", rotations);
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

