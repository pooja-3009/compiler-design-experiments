%{
#include <stdio.h>
%}

%%
([0-2][0-9]|3[0-1])[/.-](0[1-9]|1[0-2])[/.-][0-9]{4} {
    printf("%s is a Valid DOB\n", yytext);
}

.|\n {
    printf("%s is an Invalid DOB\n", yytext);
}
%%

int main()
{
    printf("Enter DOB in DD/MM/YYYY format:\n");
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}