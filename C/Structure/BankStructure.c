#include <stdio.h>

// Define a structure for a bank account
struct BankAccount {
    int account_number;
    char account_holder[100];
    double balance;
};

int main() {
    // Declare a bank account structure
    struct BankAccount myAccount = {1001, "John Doe", 1000.0};

    // Display account details
    printf("Account Number: %d\nAccount Holder: %s\nBalance: %.2lf\n", myAccount.account_number, myAccount.account_holder, myAccount.balance);

    // Perform a transaction (e.g., deposit)
    double depositAmount = 500.0;
    myAccount.balance += depositAmount;

    // Display updated balance
    printf("After deposit of %.2lf, the new balance is: %.2lf\n", depositAmount, myAccount.balance);

    return 0;
}

