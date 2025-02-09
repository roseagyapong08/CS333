
#include <stdio.h>
#include <stdlib.h>

int main() {

    double number;

    printf("Enter your number here: ");

    scanf("%lf", &number);

    if (number > 0) {
        printf("The number is positive");

    }
    if (number < 0) {
        printf ("The number is negative");
    } if (number == 0){
        printf("The number is Zero");
    }


}