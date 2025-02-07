
#include <stdio.h>
#include <stdlib.h>

int main (int arg, char * argv[]) {
    printf("hello world\n");

    int i = 0x29979245;
    
    unsigned char* ptr;
    ptr = (unsigned char *) &i;

    for (int i =0; i < sizeof(int); i++ ) {
        printf("%d: %02X\n", i, ptr[i]);
    }

    return 0;

}
