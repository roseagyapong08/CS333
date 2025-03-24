/**
 * Test code for Stack
 *
 * Author: Ying Li
 * 08/01/2016
 */


 #include "cstk.h"
 #include <stdio.h>
 #include <stdlib.h>
 
 
 int main(int argc, char **aargv)
 {
     Stack *s = stk_create(20);
 
     int i;
     printf("i is at memory location: %p\n", (void*)&i);
 
     // Print addresses of stack structure and data array (heap memory)
     printf("Address of Stack structure (s): %p\n", (void*)s);
     printf("Address of Stack's data array (s->data): %p\n", (void*)s->data);
     printf("Address of Stack's top pointer (s->top): %p\n\n", (void*)s->top);
 
     for (i = 0; i < 10; i++)
     {
         stk_push(s, i + 1);
     }
    
     // Mark 1 (first memory picture)
     printf("\nMark 1:\n");
     printf("Stack (s) is at %p\n", (void*)s);
     printf("Stack data (s->data) is at %p\n", (void*)s->data);
     printf("Stack top (s->top) is at %p\n", (void*)s->top);
     printf("Top value (s->top[-1]): %d\n", *(s->top - 1));
     stk_display(s, 0);
 
     // Display the stack
     printf("Stack contents: ");
     stk_display(s, 0);
 
     // Display reversed stack
     printf("Reversed stack: ");
     stk_display(s, 1);
 
     // Destroy the stack and free memory
     stk_destroy(s);
 
     // Mark 2 (first memory picture)
     printf("\nMark 2:\n");
     printf("Stack (s) memory is at %p (freed)\n", (void*)s);
     printf("Stack data (s->data) memory is at %p (freed)\n", (void*)s->data);
 
     return 0;
 }