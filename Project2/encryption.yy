/**
 * takes input from a specified file and encrypts each character using 
 * a predetermined substitution key.
 *
 * flex encryption.yy
 * gcc -o encryption lex.yy.c -ll
 
 * Rose Frimpomaa Agyapong
 * 
 */

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

%option noyywrap

%{
// Define the substitution key
char substitutionKey[26] = "ZYXWVUTSRQPONMLKJIHGFEDCBA"; // Example key, reverse alphabet
%}

%%

[a-z] {
    printf("%c", substitutionKey[yytext[0] - 'a']);
}
[A-Z] {
    printf("%c", substitutionKey[yytext[0] - 'A']);
}
. {
    printf("%s", yytext);
}
%%

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *input = fopen(argv[1], "r");
    if (!input) {
        printf("Error opening file: %s\n", argv[1]);
        return 1;
    }

    yyin = input;
    yylex();
    fclose(input);

    return 0;
}