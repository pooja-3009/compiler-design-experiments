%{
#include <stdio.h>

int characters = 0;
int words = 0;
int lines = 0;
%}

%x COMMENT

%%

"//".*                  { }
"/*"                    { BEGIN(COMMENT); }

<COMMENT>"*/"           { BEGIN(INITIAL); }
<COMMENT>\n             { lines++; }
<COMMENT>.              { }

\n                      { lines++; }

[ \t\r]+                { }

[A-Za-z_][A-Za-z0-9_]*  {
                            words++;
                            characters += yyleng;
                         }

[0-9]+                  {
                            words++;
                            characters += yyleng;
                         }

\"([^\\\n]|\\.)*\"      {
                            characters += yyleng;
                         }

.                       {
                            characters++;
                         }

%%

int main()
{
    yylex();

    printf("\n--- LEXICAL ANALYZER RESULT ---\n");
    printf("Number of Characters = %d\n", characters);
    printf("Number of Words = %d\n", words);
    printf("Number of Lines = %d\n", lines);

    return 0;
}

int yywrap()
{
    return 1;
}