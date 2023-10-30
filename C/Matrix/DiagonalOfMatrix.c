#include <stdio.h>

int main() {
    int matrix[3][3];
    int i , j;
    // Prompt the user to enter the matrix elements
    printf("Enter the elements of the 3x3 matrix:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Entered Matrix is :\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal Elements:\n");
    for ( i = 0; i < 3; i++) {
        printf("%d ", matrix[i][i]);
    }

    return 0;
}

