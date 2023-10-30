#include <stdio.h>

// Define a structure for a book
typedef struct Book {
    char title[100];
    char author[100];
    int year;
} Book;

int main() {
    // Declare an array of structures to store multiple books
    Book library[3];

    // Populate the array with book records
    library[0] = (Book){"The Great Gatsby", "F. Scott Fitzgerald", 1925};
    library[1] = ( Book){"To Kill a Mockingbird", "Harper Lee", 1960};
    library[2] = (Book){"1984", "George Orwell", 1949};

    // Print the book records
    printf("Library Catalog:\n");
    int i ;
    for ( i = 0; i < 3; i++) {
        printf("Book %d: %s by %s (%d)\n", i + 1, library[i].title, library[i].author, library[i].year);
    }

    return 0;
}

