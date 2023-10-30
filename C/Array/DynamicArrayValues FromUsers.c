#include <stdio.h>
#include <stdlib.h>

int main() {
    int size , i;

    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Array size must be a positive integer.\n");
        return 1;  // Exit with an error code
    }

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit with an error code
    }

    // Ask the user to enter values for the array
    for ( i = 0; i < size; i++) {
        printf("Enter value for element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Print the values entered by the user
    printf("You entered the following values:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}

