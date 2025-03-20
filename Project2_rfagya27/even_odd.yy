/**
 * This program counts the number of evens and odds
 * Rose Frimpomaa Agyapong
 * 
 */

%{
#include <stdio.h>
int even_count = 0;
int odd_count = 0;
%}

%%

[0-9]+ {
    int number = atoi(yytext);
    if (number % 2 == 0) {
        even_count++;
    } else {
        odd_count++;
    }
}

. ;

%%

int main() {
    yylex();
    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);
    return 0;
}