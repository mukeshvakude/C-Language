#include <stdio.h>

// Define a structure for a point in 2D space
struct Point {
    int x;
    int y;
};

int main() {
    // Declare an array of structures
    struct Point points[5];

    // Initialize the array
    points[0].x = 1;
    points[0].y = 2;
    points[1].x = 3;
    points[1].y = 4;
    
    points[2].x = 10;
    points[2].y = 20;
    points[3].x = 30;
    points[3].y = 40;
    points[4].x = 100;
    points[4].y = 200;
   


	
    // Access and print the members of the structures in the array
    int i;
    for ( i = 0; i < 5; i++) {
        printf("Point %d: (%d, %d)\n", i, points[i].x, points[i].y);
    }

    return 0;
}

