#include <stdio.h>

// Define a structure for a student
struct Student {
    char name[100];
    int roll_number;
    float marks;
};

int main() {
    // Declare an array of student structures
    struct Student students[3];

    // Initialize student data
    students[0] = (struct Student){"Alice", 101, 95.5};
    students[1] = (struct Student){"Bob", 102, 88.0};
    students[2] = (struct Student){"Charlie", 103, 75.5};

    // Display the student database
    printf("Student Database:\n");
    int i ;
    for ( i = 0; i < 3; i++) {
        printf("Roll Number: %d\nName: %s\nMarks: %.2f\n\n", students[i].roll_number, students[i].name, students[i].marks);
    }

    return 0;
}

