/** 
 * The program that repeatedly allocates a small amount of memory in a loop that goes on for a long time
 *
 * Your Name: Rose Frimpomaa Agyapong 
 * Date: 9th February, 2025
*/


#include <stdio.h>
#include <stdlib.h>

int main (int arg, char *argv[]){

    int*ptr;

    while(1){
        ptr = (int*)malloc(sizeof(int)); 
        free (ptr);
    }




    return 0;


}