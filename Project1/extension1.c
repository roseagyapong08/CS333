/**
 * This program shows some kinds of runtime-errors in C.
 * Uncomment various sections of the code and recompile file to see errors
 * 
 * File: Extension 1
 * Name: Rose Frimpomaa Agyapong
 * 
 */

#include <stdio.h>
#include <stdlib.h>



int main()
{
    /* Zero Division Error */
    int val = 42;
    printf("%d:", val / 0);
    return 0;
}


// int main()
// {
//     /* Array Out of Bounds Error */
//     int arr[6] = {12};
//     arr[9] = 8;
// }



// int main()
// {
//     /* Integer Overflow Error */
//     int result = 2725229020920;
//     printf("%d\n", result);
// }