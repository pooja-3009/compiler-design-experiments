#include <stdio.h>
#include <string.h>

void add(char set[], char ch)
{
    if (strchr(set, ch) == NULL)
    {
        int len = strlen(set);
        set[len] = ch;
        set[len + 1] = '\0';
    }
}

int main()
{
    char E[20] = "";
    char T[20] = "";
    char F[20] = "";

    /*
       Grammar:

       E -> E + T | T
       T -> T * F | F
       F -> ( E ) | id
    */

    /* LEADING(F) */
    add(F, '(');
    add(F, 'i');       /* i represents id */

    /* LEADING(T) */
    add(T, '*');
    add(T, '(');
    add(T, 'i');

    /* LEADING(E) */
    add(E, '+');
    add(E, '*');
    add(E, '(');
    add(E, 'i');

    printf("Grammar:\n");
    printf("E -> E + T | T\n");
    printf("T -> T * F | F\n");
    printf("F -> ( E ) | id\n\n");

    printf("LEADING(E) = { +, *, (, id }\n");
    printf("LEADING(T) = { *, (, id }\n");
    printf("LEADING(F) = { (, id }\n");

    return 0;
}