#include <stdio.h>

int main() {
    int arr[] = {23, 54, 67, 89, 21, 90, 21, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i , j;

    printf("Element Count:\n");

    for ( i = 0; i < n; i++) {
        int count = 1;

        // Skip if the element is already counted
        if (arr[i] == -1) {
            continue;
        }

        for ( j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark as counted to avoid duplicate counting
            }
        }

        printf("%d: %d\n", arr[i], count);
    }

    return 0;
}

