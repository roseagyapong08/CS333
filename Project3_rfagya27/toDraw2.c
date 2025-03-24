/**
 * Test code for Stack2
 *
 * Author: Rose Frimpomaa Agyapong
 * 
 */

 #include "cstk2.h"

 typedef struct Account {
     char *name;
     int balance;
 } Account;
 
 int main() {
     Stack *stack = stk_create(10);
 
     for (int i = 0; i < 5; i++) {
         int *x = (int *)malloc(sizeof(int));
         *x = i;
         stk_push(stack, x);
         printf("i is at memory location: %p\n", (void*)&i);
     }
 
     // Create and push an Account structure onto the stack
     Account account = {"Max Bender", 10};
     stk_push(stack, &account);
 
     // MARK 1 - draw current contents of stack and relevant contents of heap
     printf("\nMARK 1:\n");
     printf("Stack (stack) is at %p\n", (void*)stack);
     printf("Stack data array (stack->data) is at %p\n", (void*)stack->data);
     printf("Stack top (stack->top) is at %p\n", (void*)stack->top);
     return 0;
 }