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
    int a = 0X96FB;
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
    ptr =(unsigned char*)&a;
    for (int i = 0; i < sizeof(short int); i++){
        printf("%d: %02X\n", i, ptr[i] );
    }

    //for lont int
    ptr =(unsigned char*)&l;
    for (int i = 0; i < sizeof(short int); i++){
        printf("%d: %02X\n", i, ptr[i] );
    }

    //for float
    ptr =(unsigned char*)&f;
    for (int i = 0; i < sizeof(short int); i++){
        printf("%d: %02X\n", i, ptr[i] );
    }

    //for double
    ptr =(unsigned char*)&d;
    for (int i = 0; i < sizeof(short int); i++){
        printf("%d: %02X\n", i, ptr[i] );
    }


    


    
    

    return 0;

}

