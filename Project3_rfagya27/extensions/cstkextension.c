/**
 * executes the methods laid out in 'cstkextension.h'.
 *
 * gcc -o cstkextension cstkextension.c cstkextensiontest.c 
 * ./cstkextension
 
 * Rose Frimpomaa Agyapong
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "cstkextension.h"

// Creates a Stack with a maximal capacity specified by the int value
Stack *stk_create(int capacity){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    if (stack == NULL){
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    stack->data = (int *)malloc(capacity * sizeof(int));
    if (stack->data == NULL){
        fprintf(stderr, "Memory allocation failed.\n");
        free(stack);
        exit(EXIT_FAILURE);
    }

    stack->top = stack->data;
    stack->capacity = capacity;
    return stack;
}

// Check if the stack is empty
int stk_empty(Stack *stack){
    return stack->top == stack->data;
}

// Check if the stack is full
int stk_full(Stack *stack){
    return stack->top == stack->data + stack->capacity;
}

// Resizes the stack when it is full (doubling the size)
void stk_resize(Stack *stack){
    int newCapacity = stack->capacity * 2;
    int *newData = (int *)realloc(stack->data, newCapacity * sizeof(int));
    if (newData == NULL) {
        fprintf(stderr, "Memory reallocation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Update stack pointers and capacity
    stack->top = newData + (stack->top - stack->data);
    stack->data = newData;
    stack->capacity = newCapacity;
    printf("Stack resized to capacity: %d\n", stack->capacity);
}

// Pushes a value onto the stack, resizing if full
void stk_push(Stack *stack, int value){
    if (stk_full(stack)){ 
        stk_resize(stack);  // Resize the stack if it's full
    }
    *(stack->top) = value;
    stack->top++;
}

// Peeks at the top value of the stack
int stk_peek(Stack *stack){
    if (stk_empty(stack)){
        printf("Stack is empty. Cannot peek.\n");
        return 0;
    }
    return *(stack->top - 1);
}

// Pops the top value off the stack
int stk_pop(Stack *stack) {
    if (stk_empty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
        return 0;
    }
    stack->top--;
    return *(stack->top);
}

// Displays the stack
void stk_display(Stack *stack, int reverse) {
    if (stk_empty(stack)) {
        printf("Stack is empty.\n");
        return;
    }
    if (reverse) {
        for (int *ptr = stack->top - 1; ptr >= stack->data; ptr--) {
            printf("%d ", *ptr);
        }
    } else {
        for (int *ptr = stack->data; ptr < stack->top; ptr++) {
            printf("%d ", *ptr);
        }
    }
    printf("\n");
}

// Destroys the stack and frees memory
void stk_destroy(Stack *stack) {
    free(stack->data);
    free(stack);
}

// Copies the stack and returns a pointer to the copy
Stack *stk_copy(Stack *source) {
    Stack *copy = stk_create(source->capacity);
    for (int *ptr = source->data; ptr < source->top; ptr++) {
        stk_push(copy, *ptr);
    }
    return copy;
}

// Gets the current size (number of elements) in the stack
int stk_size(Stack *stack) {
    return stack->top - stack->data;
}

// Clears all elements from the stack but retains the allocated memory
void stk_clear(Stack *stack) {
    stack->top = stack->data;  // Reset the top pointer to the start of the stack
    printf("Stack cleared.\n");
}

// Shrinks the stack to fit the current number of elements
void stk_shrink(Stack *stack) {
    int currentSize = stk_size(stack);
    int *newData = (int *)realloc(stack->data, currentSize * sizeof(int));
    if (newData == NULL) {
        fprintf(stderr, "Memory reallocation failed during shrinking.\n");
        exit(EXIT_FAILURE);
    }
    stack->top = newData + currentSize;
    stack->data = newData;
    stack->capacity = currentSize;
    printf("Stack shrunk to capacity: %d\n", stack->capacity);
}

