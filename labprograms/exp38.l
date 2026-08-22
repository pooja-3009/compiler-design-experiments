%{
#include <stdio.h>

int max = 0;
%}

%%
[A-Za-z]+    {
                if (yyleng > max)
                    max = yyleng;
             }

\n           {
                printf("Length of longest word = %d\n", max);
                return 0;
             }

.            ;
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