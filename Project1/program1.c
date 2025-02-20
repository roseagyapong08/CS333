/** 
 * This  program declares a variable of each of the basic types and determine whether my machine is big- or little-endian.
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
    int a = 0X96FBC59B;
    long int l = 0XD745A96FBC59B354;
    float f = 0XBCFBC59B;
    double d = 0XE845A96FBC59B354;
    unsigned char*ptr;

    // for char
    printf("Char\n");
    ptr = (unsigned char*)&c;

    for (int i = 0; i < sizeof(char); i++){
        printf("%d: %02X\n", i, ptr[i] );

    }

    //for short
    printf("\nShort\n");
    ptr =(unsigned char*)&s;
    for (int i = 0; i < sizeof(short int); i++){
        printf("%d: %02X\n", i, ptr[i] );
    }

    //for int
    printf("\nInteger\n");
    ptr =(unsigned char*)&a;
    for (int i = 0; i < sizeof(int); i++){
        printf("%d: %02X\n", i, ptr[i] );
    }


    //for lont int
    printf("\nLong Int\n");
    ptr =(unsigned char*)&l;
    for (int i = 0; i < sizeof(long int); i++){
        printf("%d: %02X\n", i, ptr[i] );
    }

    //for float
    printf("\nFloat\n");
    ptr =(unsigned char*)&f;
    for (int i = 0; i < sizeof(float); i++){
        printf("%d: %02X\n", i, ptr[i] );
    }

    //for double
    printf("\nDouble\n");
    ptr =(unsigned char*)&d;
    for (int i = 0; i < sizeof(double); i++){
        printf("%d: %02X\n", i, ptr[i] );
    }


    


    
    

    return 0;

}

