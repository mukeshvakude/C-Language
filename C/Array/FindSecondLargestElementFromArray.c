#include <stdio.h>

int main() {
    int arr[] = {12, 45, 89, 76, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int i , secondLargest = arr[0];

    for ( i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", secondLargest);

    return 0;
}

