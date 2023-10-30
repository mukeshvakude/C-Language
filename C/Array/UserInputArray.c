#include <stdio.h>


int main() {
    int i , size;

    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Array size must be a positive integer.\n");
        return 1;  // Exit with an error code
    }

    // Declare an array of the given size
    int arr[size];

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

    return 0;
}

