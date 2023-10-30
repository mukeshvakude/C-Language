#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
	int i , j , k;
    for ( i = 0; i < size; i++) {
        for ( j = i + 1; j < size; ) {
            if (arr[i] == arr[j]) {
                for ( k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;
            } else {
                j++;
            }
        }
    }

    printf("Array with duplicate elements removed: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

