%{
#include <stdio.h>
%}

%%
"hello"    { printf("hi"); }
.|\n       { printf("%s", yytext); }
%%

int main()
{
    printf("Enter text: ");
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}
