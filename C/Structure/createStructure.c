#include <stdio.h>

// Define a structure for a student
struct Student {
    char name[50];
    int age;
    double gpa;
};

int main() {
    // Declare a structure variable and initialize it
    struct Student student1 = {"Mukesh Vakude", 27, 10};

    // Access and print the members of the structure
    printf("Student Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2lf\n", student1.gpa);

    return 0;
}

