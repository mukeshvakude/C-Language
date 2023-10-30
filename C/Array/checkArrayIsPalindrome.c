#include <stdio.h>
//#include <stdbool.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int i , size = sizeof(arr) / sizeof(arr[0]);
//    bool isPalindrome = true;

	int isPalindrome = 1 ; //Initially we assume array is palindrom
    for ( i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            isPalindrome = 0; // if  array values are mismatch then  we assume array is not palindrom
            break;
        }
    }

    if (isPalindrome == 1) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}

