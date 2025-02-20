/** 
 * A short description of the program
 * This rogram displays the contents of the stack memory by accessing memory addresses through a pointer 
 * and printing the hexadecimal values of the first 100 bytes.
 * Your Name: Rose Frimpomaa Agyapong 
 * Date: 9th February, 2025
*/


#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *agrv[]){
    char c = 0XB4;
    short int s = 0XF034;
    int a = 0X96FBC59B;
    long int l = 0XD745A96FBC59B354;
    unsigned char*ptr;

    printf("%p\n", &ptr);

    ptr = (unsigned char*)&ptr;
    for (int i =0; i < 100; i++ ){
        printf("%d: %02X\n",i, ptr[i]);
    }


    return 0;
}