/** 
 * The program initializes a bank account with a user-provided name and zero balance. 
 * It then inspects the memory contents of the name field.
 *
 * Your Name: Rose Frimpomaa Agyapong 
 * Date: 9th February, 2025
*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 /**
  * This creates a definition for the struct Account.
  *
  * Note that balance (an int) is saved after name in memory.
  */
 typedef struct Account {
     char name[10];
     int balance;
 } Account;
 
 int main(int arg, char *argv[]) {

    Account newAccount = {"", 0};
    printf("Please input your name for a new bank account: ");
    // Account newAccount = {"", 0};
    // memset(&newAccount, 0, sizeof(newAccount)); // Zero-initialize the account

  
     
     /**
      * The following line reads input from the terminal.
      *
      * One could have simply done: scanf("%s", newAccount.name), but this would 
      * include the newline character at the end of the line. The [^\n] tells the
      * program to only read as much until a newline character is encountered. 
      */
    scanf("%[^\n]s", newAccount.name);
    printf("Thank you %s, your new account has been initialized with balance %d.",
            newAccount.name, newAccount.balance);

    // Use unsigned char pointer to inspect memory contents of name field
    // printf("Memory contents of name field: ");
    // unsigned char *ptr = (unsigned char *)&newAccount;
    // for (int i = 0; i < sizeof(newAccount); i++) {
    //     printf("%02X ", ptr[i]);
    // }
    // printf("\n");              
     return 0;
 }