/**
 * includes essential functions for stack operations.
 *
 * Rose Frimpomaa Agyapong
 * 
 */

 typedef struct Stack 
 {
     int *data; // this is a pointer to the start of the data for the stack
     int *top; // this will point to the next place to insert in the stack
     int capacity; // this is the maximal size of the stack
 } Stack;
 
 // creates a Stack with a maximal capacity specified by the int value
 Stack *stk_create(int capacity);
 
 //returns 1 if the given Stack is empty, otherwise 0.
 int stk_empty(Stack* stack);
 
 //returns 1 if the given Stack is full, otherwise 0.
 int stk_full(Stack* stack); 
 
 //adds a new value to the top of the stack if there's space. If there's no space, prints out a warning but does nothing (and doesn't crash).
 void stk_push(Stack* stack, int value);
 
 //returns the value on the top of the stack if such a value exists. Otherwise, prints out a warning and returns 0.
 int stk_peek(Stack* stack);
 
 //removes and returns the value on the top of the stack if such a value exists. Otherwise, prints out a warning and returns 0.
 int stk_pop(Stack* stack);
 
 //prints out the list in the reverse order (LILO) if the int value is 1, otherwise, prints out in the original order (LIFO).
 void stk_display(Stack *stack, int reverse); 
 
 //frees up the memory
 void stk_destroy (Stack *stack); 
 
 //copies the contents into another Stack of the same maximal size and returns it.
 Stack *stk_copy(Stack *stack);