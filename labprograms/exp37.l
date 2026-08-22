%{
#include <stdio.h>
int count = 0;
%}

%%
"hello"     { count++; }
\n          { printf("Frequency of the word = %d\n", count); return 0; }
.           ;
%%

int main()
{
    printf("Enter a sentence: ");
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}