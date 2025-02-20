/**
 * 
 * Uncomment/comment various sections of the code and recompile file to see other errors
 * 
 * File: Extension 3
 * Name: Rose Frimpomaa Agyapong
 * 
 *
 */




#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

// int main() {
//     int *ptr = NULL;   // Declare a pointer variable ptr and initialize it to NULL
//     *ptr = 10;         // Causes a segmentation error
//     return 0;   
// }


int main() {
    char *s = "test";
    // Attempt to write to read-only memory (string literal).
    *s = 'T';  // This may cause a bus error due to writing to read-only memory.
    return 0;
}