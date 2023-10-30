#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int i , merged[size1 + size2];

    for ( i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for ( i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for ( i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

