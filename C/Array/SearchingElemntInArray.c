#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int searchValue = 3;
    int i,found = 0;

    for ( i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] == searchValue) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d found in the array.\n", searchValue);
    } else {
        printf("Element %d not found in the array.\n", searchValue);
    }

    return 0;
}

