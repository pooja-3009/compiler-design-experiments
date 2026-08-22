%{
#include <stdio.h>

int positive = 0;
int negative = 0;
%}

%%
-[0-9]+        { negative++; printf("%s is Negative\n", yytext); }
[+]?[0-9]+     { positive++; printf("%s is Positive\n", yytext); }
[ \t\n]+       ;
.              ;
%%

int main()
{
    printf("Enter positive and negative numbers:\n");
    yylex();

    printf("\nPositive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);

    return 0;
}

int yywrap()
{
    return 1;
}