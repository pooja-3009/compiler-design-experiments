#include <stdio.h>
#include <string.h>

int typeEquivalent(char type1[], char type2[])
{
    if (strcmp(type1, type2) == 0)
        return 1;

    return 0;
}

int main()
{
    char type1[20], type2[20];

    printf("Enter first type expression: ");
    scanf("%s", type1);

    printf("Enter second type expression: ");
    scanf("%s", type2);

    if (typeEquivalent(type1, type2))
    {
        printf("Types are Equivalent\n");
    }
    else
    {
        printf("Types are Not Equivalent\n");
    }

    return 0;
}