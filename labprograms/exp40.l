%{
#include <stdio.h>
%}

%%
"int"|"float"|"char"|"double"|"void"
                { printf("%s : KEYWORD\n", yytext); }

[0-9]+          { printf("%s : NUMBER\n", yytext); }

[A-Za-z_][A-Za-z0-9_]*
                { printf("%s : IDENTIFIER\n", yytext); }

"+"|"-"|"*"|"/"|"="
                { printf("%s : OPERATOR\n", yytext); }

"("|")"|"{"|"}"|";"|","
                { printf("%s : SEPARATOR\n", yytext); }

[ \t\n]         ;

.               { printf("%s : SPECIAL CHARACTER\n", yytext); }
%%

int main()
{
    printf("Enter a C program:\n");
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}