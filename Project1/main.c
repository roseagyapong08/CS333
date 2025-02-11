/** 
 * A short description of the program
 *
 * Your Name: Rose Frimpomaa Agyapong 
 * Date: 9th February, 2025
*/


#include <stdio.h>
#include <stdlib.h>

int main(int arg, char * argv[]) {
    //Task 1
    char c = 0XB4;
    short int s = 0XF034;
    int i = 0X96FB;
    long int l = 0XD745A;
    float f = 0XBC;
    double d = 0XE8;
    unsigned char*ptr;

    // for char
    ptr = (unsigned char*)&c;

    for (int i = 0; i < sizeof(char); i++){
        // printf("%d: %02X\n", i, ptr[i] );

    }

    //for short
    ptr =(unsigned char*)&s;
    for (int i = 0; i < sizeof(short int); i++){
        printf("%d: %02X\n", i, ptr[i] );
    }

    //for int



    


    
    

    return 0;

}

