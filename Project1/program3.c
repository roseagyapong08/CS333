


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