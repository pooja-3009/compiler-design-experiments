%{
#include <stdio.h>
%}

%%
[0-9]    { printf("It is a digit\n"); }
[^0-9\n] { printf("It is not a digit\n"); }
\n       ;
%%

int main()
{
    printf("Enter a character: ");
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}