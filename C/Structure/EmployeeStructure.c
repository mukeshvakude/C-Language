#include <stdio.h>

// Define a structure for an employee
struct Employee {
    char name[100];
    int employeeID;
    double salary;
};

int main() {
    // Declare an array of employee structures
    struct Employee employees[4];

    // Initialize employee data
    employees[0] = (struct Employee){"John", 1001, 55000.0};
    employees[1] = (struct Employee){"Mary", 1002, 60000.0};
    employees[2] = (struct Employee){"David", 1003, 52000.0};
    employees[3] = (struct Employee){"Emily", 1004, 58000.0};

    // Display employee information
    printf("Employee Information:\n");
    int i;
    for ( i = 0; i < 4; i++) {
        printf("Employee ID: %d\nName: %s\nSalary: %.2lf\n\n", employees[i].employeeID, employees[i].name, employees[i].salary);
    }

    return 0;
}

