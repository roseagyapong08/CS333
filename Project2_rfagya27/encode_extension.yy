/**
 * takes an int and string from the user and shifts every alphabet by specified int
 *
 * flex encode_extension.yy
 * gcc -o encode_extension lex.yy.c -ll
 
 * Rose Frimpomaa Agyapong
 * 
 */


%{
#include <stdio.h>
%}

%option noyywrap

%{
int shiftValue = 13; // Default shift value
%}

%%

[a-z] {
    int shifted = 'a' + (yytext[0] - 'a' + shiftValue) % 26;
    printf("%c", shifted);
}
[A-Z] {
    int shifted = 'A' + (yytext[0] - 'A' + shiftValue) % 26;
    printf("%c", shifted);
}
. {
    printf("%s", yytext);
}
%%

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <input_file> <shift_value>\n", argv[0]);
        return 1;
    }

    // Parse shift value from command-line argument
    shiftValue = atoi(argv[2]);

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