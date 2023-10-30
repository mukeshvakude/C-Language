#include <stdio.h>

// Define a structure for an address
struct Address {
    char street[50];
    char city[50];
    char state[20];
};

// Define a structure for a person
struct Person {
    char name[50];
    int age;
    struct Address address;
};

int main() {
    // Declare a structure variable and initialize it
    struct Person person1 = {"Mukesh", 27, {"123 Malegoan  college", "Baramati", " pin - 413115 "}};

    // Access and print the members of the structure
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address: %s, %s, %s\n", person1.address.street, person1.address.city, person1.address.state);

    return 0;
}

