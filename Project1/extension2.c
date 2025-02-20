/**
 * The program initializes a bank account with a user-provided name and zero balance. 
 * It then inspects the memory contents of the name field.
 * Improvement on program5 because of checking for valid input name.
 * Improvement on program5 as it initializes the account to zero
 *
 * 
 * File: Extension 2
 * Name: Rose Frimpomaa Agyapong
 * 
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <ctype.h>
 
 
 // Ensures user inputs a valid name
 int isValidName(const char *name) {
     if (strlen(name) == 0) return 0; // Empty string
     for (int i = 0; i < strlen(name); i++) {
         if (!isalpha(name[i]) && name[i] != ' ') {
             return 0; // Invalid character
         }
     }
     return 1;
 }
 
 int main(int argc, char *argv[]) {
     // Definition for the struct Account
     typedef struct Account {
         char name[20];
         int balance;
     } Account;
 
     printf("Please input your name for a new bank account: ");
     Account newAccount;
     memset(&newAccount, 0, sizeof(newAccount)); // Zero-initialize the account
 
     // Read input from the terminal, potentially causing a buffer overflow
     scanf("%[^\n]s", newAccount.name);
 
     // Validate input
     if (!isValidName(newAccount.name)) {
         printf("Invalid name! Only alphabetic characters are allowed.\n");
         return 1;
     }
 
     // Print information regarding the new account
     printf("Thank you %s, your new account has been initialized with balance %d.\n",
            newAccount.name, newAccount.balance);
 
     // Use unsigned char pointer to inspect memory contents of name field
     printf("Memory contents of name field: ");
     unsigned char *ptr = (unsigned char *)&newAccount;
     for (int i = 0; i < sizeof(newAccount); i++) {
         printf("%02X ", ptr[i]);
     }
     printf("\n");
     return 0;
 }