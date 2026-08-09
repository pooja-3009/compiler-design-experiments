#include <stdio.h>
#include <string.h>

int isValid(char type1[], char type2[], char op)
{
    /* Arithmetic operations between normal numeric types */
    if ((strcmp(type1, "int") == 0 || strcmp(type1, "float") == 0) &&
        (strcmp(type2, "int") == 0 || strcmp(type2, "float") == 0))
    {
        if (op == '+' || op == '-' || op == '*' || op == '/')
            return 1;
    }

    /* char with char is allowed */
    if (strcmp(type1, "char") == 0 &&
        strcmp(type2, "char") == 0 &&
        (op == '+' || op == '-'))
    {
        return 1;
    }

    return 0;
}

int main()
{
    char type1[20], type2[20];
    char op;

    printf("Enter type of first operand: ");
    scanf("%s", type1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter type of second operand: ");
    scanf("%s", type2);

    printf("\nExpression: %s %c %s\n", type1, op, type2);

    if (isValid(type1, type2, op))
    {
        printf("Valid expression\n");
    }
    else
    {
        printf("Type error\n");
    }

    return 0;
}