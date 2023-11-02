#include <stdio.h>

int main() {
    int arr[] = {23, 54, 67, 89, 21, 90, 21, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    int searchNumber = 21;
    int found = 0 ,i;
    int lastOccurrence = -1;

    for ( i = n; i  > 1; i--) {
        if (arr[i] == searchNumber) {
            lastOccurrence = i;
            found = 1;
            break;
        }
    }

    if (found) {
        printf("The last occurrence of %d is at index %d\n", searchNumber, lastOccurrence);
    } else {
        printf("%d not found in the array.\n", searchNumber);
    }

    return 0;
}

