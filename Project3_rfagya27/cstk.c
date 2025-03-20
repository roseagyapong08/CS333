/**
 * executes the methods laid out in 'cstk.h'.
 *
 * gcc -o cstktest cstktest.c cstk.c
 * ./cstktest
 
 * Rose Frimpomaa Agyapong
 * 
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include "cstk.h"
 
 // creates a Stack with a maximal capacity specified by the int value
 Stack *stk_create(int capacity){
     // Allocate memory for the stack Structure
     Stack *stack = (Stack *)malloc(sizeof(Stack));
     if (stack == NULL){
         fprintf(stderr, "Memory allocation failed.\n");
         exit(EXIT_FAILURE);
     }
     // Allocate memory for the stack data
     stack->data = (int *)malloc(capacity *sizeof(int));
     if (stack->data == NULL){
         fprintf(stderr, "Memory allocation failed.\n");
         free(stack);
         exit(EXIT_FAILURE);
     }
     // Initialize stack properties
     stack->top = stack->data; // Set top pointer to the beginning of the data array
     stack->capacity = capacity; // Set the maximum capacity of the stack
     return stack;
 }
 
 // Check if the stack is empty
 int stk_empty(Stack *stack){
     return stack->top == stack->data; // If top equals data, stack is empty
 }
 
 // Check if the stack is full
 int stk_full(Stack *stack){
     return stack->top == stack->data + stack->capacity; // If top is at the end of data, stack is full
 }
 
 // Pushes a value onto the stack
 void stk_push(Stack *stack, int value){
     if (stk_full(stack)){ // Check if the stack is full
         printf("Stack overflow. Cannot push element.\n");
         return;
     }
     *(stack->top) = value; // Add the value to the top of the stack
     stack->top++; // Move the top pointer to the next position
 }
 
 // Peeks at the top value of the stack
 int stk_peek(Stack *stack){
     if (stk_empty(stack)){ // Check if the stack is empty
         printf("Stack is empty. Cannot peek.\n");
         return 0;
     }
     return *(stack->top - 1); // Return the top value of the stack
 }
 
 // Pops the top value off the stack
 int stk_pop(Stack *stack) {
     if (stk_empty(stack)) {  // Check if the stack is empty
         printf("Stack is empty. Cannot pop.\n");
         return 0;
     }
     stack->top--;  // Move the top pointer down
     return *(stack->top);  // Return the value that was popped off
 }
 
 // Displays the stack
 void stk_display(Stack *stack, int reverse) {
     if (stk_empty(stack)) {  // Check if the stack is empty
         printf("Stack is empty.\n");
         return;
     }
     if (reverse) {  // Check if the reverse flag is set
         for (int *ptr = stack->top - 1; ptr >= stack->data; ptr--) {  // Iterate from top to bottom
             printf("%d ", *ptr);
         }
     } else {  // If not reverse
         for (int *ptr = stack->data; ptr < stack->top; ptr++) {  // Iterate from bottom to top
             printf("%d ", *ptr);
         }
     }
     printf("\n");
 }
 
 // Destroys the stack and frees memory
 void stk_destroy(Stack *stack) {
     free(stack->data);  // Free the memory allocated for the stack data
     free(stack);  // Free the memory allocated for the stack structure
 }
 
 // Copies the stack and returns a pointer to the copy
 Stack *stk_copy(Stack *source) {
     Stack *copy = stk_create(source->capacity);  // Create a new stack with the same capacity
     for (int *ptr = source->data; ptr < source->top; ptr++) {  // Iterate over the source stack
         stk_push(copy, *ptr);  // Push each value onto the copy stack
     }
     return copy;  // Return the copied stack
 }