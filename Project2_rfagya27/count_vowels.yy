/**
 * Counts the number of rows, characters, and vowels(both upper and lower cases) in a file
 *
 * flex count_vowels.yy
 * gcc -o count_vowels lex.yy.c -ll
 * Rose Frimpomaa Agyapong
 * 
 */

%{
#include <stdio.h>
int rows = 0;
int characters = 0;
int vowels[5] = {0}; // Array to store counts of each vowel [a, e, i, o, u]
%}

%%
\n { rows++; } // Match newline character to count rows
. {
    characters++;  // Increment the character count for each character
    
    switch(yytext[0]) {
        case 'a':
        case 'A':
            vowels[0]++;  // Increment 'a' or 'A'
            break;
        case 'e':
        case 'E':
            vowels[1]++;  // Increment 'e' or 'E'
            break;
        case 'i':
        case 'I':
            vowels[2]++;  // Increment 'i' or 'I'
            break;
        case 'o':
        case 'O':
            vowels[3]++;  // Increment 'o' or 'O'
            break;
        case 'u':
        case 'U':
            vowels[4]++;  // Increment 'u' or 'U'
            break;
    }
}

%%

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE* input = fopen(argv[1], "r");
    if (!input) {
        printf("Error opening file %s\n", argv[1]);
        return 1;
    }

    yyin = input;
    yylex();
    fclose(input);

    printf("Number of Rows: %d\n", rows);
    printf("Number of Characters: %d\n", characters);
    printf("Occurrences of each vowel:\n");
    printf("a: %d\n", vowels[0]);
    printf("e: %d\n", vowels[1]);
    printf("i: %d\n", vowels[2]);
    printf("o: %d\n", vowels[3]);
    printf("u: %d\n", vowels[4]);

    return 0;
}
