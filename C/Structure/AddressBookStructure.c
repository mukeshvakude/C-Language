#include <stdio.h>

// Define a structure for a contact
struct Contact {
    char name[100];
    char email[100];
    char phone[15];
};

int main() {
    // Declare an array of contact structures
    struct Contact addressBook[3];

    // Populate the address book
    addressBook[0] = (struct Contact){"Alice", "alice@example.com", "123-456-7890"};
    addressBook[1] = (struct Contact){"Bob", "bob@example.com", "987-654-3210"};
    addressBook[2] = (struct Contact){"Charlie", "charlie@example.com", "555-123-4567"};

    // Display the address book
    printf("Address Book:\n");
    int i ;
    for ( i = 0; i < 3; i++) {
        printf("Name: %s\nEmail: %s\nPhone: %s\n\n", addressBook[i].name, addressBook[i].email, addressBook[i].phone);
    }

    return 0;
}

