/**
 * This program strips an html file of tags, 
 * single-line comments, and extraneous whitespace.
 * 
 * flex -o 
 * gcc -o html_stripper lex.yy.c -ll

 * Rose Frimpomaa Agyapong
 * 
 */



 %{
#include <stdio.h>
%}

%option noyywrap

%%

[ \t\n]$+ {

}

^[ \t\n]+ {

}

\<!--([^\<]|\<[^\!]|\<![^-]|\<!-[^-])*--\>  { 
    // printf("REMOVING: %s\n", yytext);
}


\s*(\<[^\<]*\>)\s* {  

}

([ \n\r\t]*(\<[^\<]*\>)[ \n\r\t]*)*\n([ \n\r\t]*(\<[^\<]*\>)[ \n\r\t]*)* {  
  
    printf("\n");
}

\s*\n\s*   {}

[ ]+    {printf("");}

(.|\n) {
    ECHO;
}

%%

int main( int argc, char *argv[] ) {
		
if (argc > 1)
    // reading input file
	yyin = fopen( argv[1], "r" );

yylex();
printf("\n");
return 0;
}



