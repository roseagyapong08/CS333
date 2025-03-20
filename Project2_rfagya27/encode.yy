/**
 * Read a text and shifts each alphabet by 13 spaces forward in the alphabet
 *
 * flex encode.yy
 * gcc -o encode lex.yy.c -ll
 * Rose Frimpomaa Agyapong
 * 
 */

%{
#include <stdio.h>
%}

%%
[a-z] {
    int shifted = 'a' + (yytext[0] - 'a' + 13) % 26;
    printf("%c", shifted);
}
[A-Z] {
    int shifted = 'A' + (yytext[0] - 'A' + 13) % 26;
    printf("%c", shifted);
}
. { printf("%s", yytext); }
%%

int main( int argc, char *argv[] ) {
		
if (argc > 1)
    // reading input file
	yyin = fopen( argv[1], "r" );

yylex();
printf("\n");
return 0;
}
