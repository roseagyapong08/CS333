/**
 * executes the methods laid out in 'cstk2.h'.
 *
 * gcc -o cstktest2 cstktest2.c cstk2.c
 * ./cstktest2
 
 * Rose Frimpomaa Agyapong
 * 
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "cstk2.h"
 
 
 // Returns a reference to an allocated Stack.
 Stack *stk_create(int capacity) {
     // Allocate memory for the stack Structure
     Stack *stack = (Stack *)malloc(sizeof(Stack));
     if (stack == NULL) {
         fprintf(stderr, "Memory allocation failed.\n");
         exit(EXIT_FAILURE);
     }
     // Allocate memory for the stack data
     stack->data = (void **)malloc(sizeof(void *) * capacity);
     if (stack->data == NULL) {
         fprintf(stderr, "Memory allocation failed.\n");
         free(stack);
         exit(EXIT_FAILURE);
     }
     // Initialize stack properties
     stack->top = stack->data; // Set top pointer to the beginning of the data array
     stack->capacity = capacity; // Set the maximum capacity of the stack
     return stack;
 }
 
 
 // Frees all space allocated for the Stack.
 void stk_destroy(Stack *stack) {
     if (stack) {
         if (stack->data) {
             free(stack->data);
         }
         free(stack);
     }
 }
 
 // Returns the number of items in the given Stack.
 int stk_size(Stack *stack) {
     if (!stack) return 0;
     return stack->top - stack->data;
 }
 
 // Adds the given item to the top of the given Stack.
 void stk_push(Stack *stack, void *item) {
     if (stk_size(stack) == stack->capacity) { // Check if the stack is full
         printf("Stack overflow. Cannot push element.\n");
         return;
     }
     *(stack->top) = item;
     stack->top++;
 }
 
 // Peeks at the top value of the stack
 void *stk_peek(Stack *stack){
     if (stk_size(stack) == 0){ // Check if the stack is empty
         printf("Stack is empty. Cannot peek.\n");
         return 0;
     }
     return *(stack->top - 1); // Return the top value of the stack
 }
 
 // Pops the top value off the stack
 void *stk_pop(Stack *stack) {
     if (stk_size(stack) == 0) { // Check if the stack is empty
         printf("Stack is empty. Cannot peek.\n");
         return 0;
     }
     stack->top--;
     return *(stack->top);
 }
 
 
 char *stk_toString(Stack *stack, char *(*toString)(void *)) {
     int size = stk_size(stack);
     if (size == 0) {
         char *emptyString = (char *)malloc(3 * sizeof(char));  // "[]" + null terminator
         strcpy(emptyString, "[]");
         return emptyString;
     }
 
     // Step 1: Calculate total memory needed for the final string.
     int totalSize = 2;  // Start with room for "[" and "]"
     for (int i = 0; i < size; i++) {
         char *str = toString(stack->data[i]);
         totalSize += strlen(str);  // Account for the length of each item's string
         if (i < size - 1) {
             totalSize += 2;  // Add space for ", "
         }
         free(str);  // Free the string allocated by toString
     }
 
     // Step 2: Allocate exactly the required amount of memory.
     char *result = (char *)malloc(totalSize * sizeof(char));
     if (!result) return NULL;
 
     // Step 3: Build the final string.
     strcpy(result, "[");
     for (int i = 0; i < size; i++) {
         char *str = toString(stack->data[i]);
         strcat(result, str);
         if (i < size - 1) {
             strcat(result, ", ");
         }
         free(str);
     }
     strcat(result, "]");
 
     return result;
 }