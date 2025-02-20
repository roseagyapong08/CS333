/** 
 * The program showcases three struct layouts by initializing them with values and  memory layouts.
 *
 * Your Name: Rose Frimpomaa Agyapong 
 * Date: 9th February, 2025
*/

#include <stdio.h>
#include <stdlib.h>


size_t a = 48;

struct Layout1{
    int a1;
    char c1;
    short s1;
    
        
};

struct Layout2{
    short s2;
    char c2;
    int a2;

};

struct Layout3 {
    char c3;
    int a3;
    short s3;
    
};

int main (int arg, char *argv[]){
    struct Layout1 * layout1 = malloc(sizeof(struct Layout1));
    layout1-> c1 = 0xA1;
    layout1-> s1 = 0XF034;
    layout1-> a1 = 0X96FBC59B;

    struct Layout2 * layout2 = malloc(sizeof(struct Layout2));
    layout2-> c2 = 0xA1;
    layout2-> a2= 0X96FBC59B;
    layout2-> s2 = 0XF034;
   

    struct Layout3 * layout3 = malloc(sizeof(struct Layout3));
    layout3-> a3 = 0X96FBC59B;
    layout3-> c3 = 0xA1;
    layout3-> s3 = 0XF034;
    

    unsigned char*ptr;
    ptr = (unsigned char*)& layout1->a1;

    //print memory layouts for all Layouts
    printf("Memory layout for Layout1:\n  ");
    for (int i = 0; i < sizeof(*layout1); i++){
        printf("%d: %02X\n", i, ptr[i]);
    }printf("\n");


    unsigned char*ctr;
    ctr = (unsigned char*)& layout2->s2;

    printf("Memory layout for Layout2:\n ");
    for (int i = 0; i < sizeof(*layout2); i++){
        printf("%d: %02X\n", i, ctr[i]);
    }printf("\n");

    unsigned char*atr;
    atr = (unsigned char*)& layout3->c3;
    printf("\nMemory layout for Layout3:\n ");
    for (int i = 0; i < sizeof(*layout3); i++){
        printf("%d: %02X\n", i, atr[i]);
    }

    

 
    
    return 0;
    
    
}