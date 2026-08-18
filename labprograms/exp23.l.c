%{
#include <stdio.h>

int line_no = 1;
%}

%%

\n      {
            printf("\n");
            line_no++;
            printf("%d: ", line_no);
        }

.       {
            printf("%s", yytext);
        }

%%

int main()
{
    printf("1: ");
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}