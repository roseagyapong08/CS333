/**
 
 * Rose Frimpomaa Agyapong
 * 
 */

#include <stdio.h>
#include "cstkextension.h"

int main() {
    // Create a stack with an initial capacity of 3
    Stack *stack = stk_create(3);

    // Push elements onto the stack
    stk_push(stack, 1);
    stk_push(stack, 2);
    stk_push(stack, 3);

    // Display the stack
    printf("Stack after pushing 3 elements: ");
    stk_display(stack, 0);

    // Push more elements, causing the stack to resize
    stk_push(stack, 4);
    stk_push(stack, 5);
    printf("Stack after resizing: ");
    stk_display(stack, 0);

    // Check the size of the stack
    printf("Current stack size: %d\n", stk_size(stack));

    // Pop an element
    int popped = stk_pop(stack);
    printf("Popped value: %d\n", popped);
    printf("Stack after pop: ");
    stk_display(stack, 0);

    // Clear the stack
    stk_clear(stack);
    printf("Stack after clearing: ");
    stk_display(stack, 0);

    // Shrink the stack
    stk_shrink(stack);
    printf("Stack after shrinking: ");
    stk_display(stack, 0);

    // Destroy the stack
    stk_destroy(stack);

    return 0;
}
