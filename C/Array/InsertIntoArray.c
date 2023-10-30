#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int insertValue = 6;
    int i , insertIndex = 2;

    for ( i = 4; i >= insertIndex; i--) {
        arr[i + 1] = arr[i];
    }
    arr[insertIndex] = insertValue;

    for ( i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

