#include <stdio.h>

// Define a structure for a rectangle
typedef struct Rectangle {
    double length;
    double width;
} Rectangle;

// Function to calculate the area of a rectangle
double calculateArea(Rectangle rect) {
    return rect.length * rect.width;
}

int main() {
    // Declare a rectangle and initialize its attributes
    Rectangle myRect = {5.0, 3.0};

    // Calculate and display the area of the rectangle
    double area = calculateArea(myRect);
    printf("Rectangle with length %.2lf and width %.2lf has an area of %.2lf square units.\n", myRect.length, myRect.width, area);

    return 0;
}

