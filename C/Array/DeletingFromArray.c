#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i, deleteIndex = 4;

    for ( i = deleteIndex; i < 4; i++) {
        arr[i] = arr[i + 1];
    }

    for ( i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    

    return 0;
}

