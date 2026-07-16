#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[200];
    int i = 0;

    printf("Enter the program:\n");
    fgets(str, sizeof(str), stdin);

    printf("\nIdentifiers: ");
    while (str[i] != '\0')
    {
        // Ignore spaces, tabs and new lines
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            i++;
            continue;
        }

        // Ignore single line comments
        if (str[i] == '/' && str[i + 1] == '/')
            break;

        // Ignore multi-line comments
        if (str[i] == '/' && str[i + 1] == '*')
        {
            i += 2;
            while (!(str[i] == '*' && str[i + 1] == '/') && str[i] != '\0')
                i++;
            i += 2;
            continue;
        }

        // Identify Identifiers
        if (isalpha(str[i]) || str[i] == '_')
        {
            while (isalnum(str[i]) || str[i] == '_')
            {
                printf("%c", str[i]);
                i++;
            }
            printf(" ");
        }
        else
            i++;
    }

    i = 0;
    printf("\nConstants: ");
    while (str[i] != '\0')
    {
        if (isdigit(str[i]))
        {
            while (isdigit(str[i]))
            {
                printf("%c", str[i]);
                i++;
            }
            printf(" ");
        }
        else
            i++;
    }

    i = 0;
    printf("\nOperators: ");
    while (str[i] != '\0')
    {
        if (strchr("+-*/=%<>", str[i]))
            printf("%c ", str[i]);
        i++;
    }

    return 0;
}