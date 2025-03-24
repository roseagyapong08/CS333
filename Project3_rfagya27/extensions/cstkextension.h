/**
 * includes essential functions for robust stack operations.
 *
 * Rose Agyapong
 * 
 */

// Stack extension to make more robust (Extension sugeestion 9)

// Define the Stack structure
typedef struct {
    int *data;       // Pointer to stack data
    int *top;        // Pointer to the top of the stack
    int capacity;    // Maximum capacity of the stack
} Stack;

// Function prototypes
Stack *stk_create(int capacity);
int stk_empty(Stack *stack);
int stk_full(Stack *stack);
void stk_push(Stack *stack, int value);
int stk_peek(Stack *stack);
int stk_pop(Stack *stack);
void stk_display(Stack *stack, int reverse);
void stk_destroy(Stack *stack);
Stack *stk_copy(Stack *source);
int stk_size(Stack *stack);
void stk_clear(Stack *stack);
void stk_resize(Stack *stack);
void stk_shrink(Stack *stack);