%{
#include <stdio.h>

int comments = 0;
FILE *out;
%}

%%

"//".* {
    comments++;
}

"/*"([^*]|\*+[^*/])*\*+"/" {
    comments++;
}

\n {
    fprintf(out, "\n");
}

. {
    fprintf(out, "%s", yytext);
}

%%

int main()
{
    out = fopen("output.c", "w");

    if (out == NULL)
    {
        printf("Unable to create output file.\n");
        return 1;
    }

    yylex();

    fclose(out);

    printf("Number of comments = %d\n", comments);
    printf("Comments eliminated successfully.\n");
    printf("Output written to output.c\n");

    return 0;
}

int yywrap()
{
    return 1;
}