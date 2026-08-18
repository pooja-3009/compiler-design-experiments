%{
#include <stdio.h>
%}

%%

^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$ {
    printf("Valid Email Address\n");
}

.* {
    printf("Invalid Email Address\n");
}

%%

int main()
{
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}