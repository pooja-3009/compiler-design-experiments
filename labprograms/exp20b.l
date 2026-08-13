%{
#include <stdio.h>

int macros = 0;
int headers = 0;
%}

%%

^[ \t]*#[ \t]*define[^\n]*    {
                                    macros++;
                                }

^[ \t]*#[ \t]*include[ \t]*<[^>]+> {
                                    headers++;
                                }

\n                              { }
.                               { }

%%

int main()
{
    yylex();

    printf("Number of Macros = %d\n", macros);
    printf("Number of Header Files = %d\n", headers);

    return 0;
}

int yywrap()
{
    return 1;
}