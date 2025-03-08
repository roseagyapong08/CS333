/**
 * A simple Clite parser
 *
 * flex clite_parser.yy
 * gcc -o clite_parser lex.yy.c -ll
 
 * Rose Frimpomaa Agyapong
 * 
 */

%{
#include <stdio.h>
%}

%option noyywrap

%%

if|else|while|for|int|float {
    printf("Keyword-%s\n", yytext);
}

[0-9]+ {
    printf("Integer-%s\n", yytext);
}

[0-9]+"."[0-9]* {
    printf("Float-%s\n", yytext);
}


[a-zA-Z_][a-zA-Z0-9_]* {
    printf("Identifier-%s\n", yytext);
}

"=" {
    printf("Assignment\n");
}

"=="|"<"|">"|"<="|">=" {
    printf("Comparison-%s\n", yytext);
}

"+"|"-"|"*"|"/" {
    printf("Operator-%s\n", yytext);
}

\{ {
    printf("Open-bracket\n");
}


\} {
    printf("Close-bracket\n");
}

\( {
    printf("Open-paren\n");
}

\) {
    printf("Close-paren\n");
}

[ \t\n]+ {
    // Ignore whitespace characters
}

";" {
    // Ignore semicolons
}

%%

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Please include the filename in the command line.\n");
        return 1;
    }

    // Reading input file
    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        printf("Error opening file: %s\n", argv[1]);
        return 1;
    }

    yylex();
    fclose(yyin);
    printf("\n");
    return 0;
}