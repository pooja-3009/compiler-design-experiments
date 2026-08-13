#include <stdio.h>
#include <string.h>

int main()
{
    char op1[20], op2[20], result[20], op;
    int n, i;

    printf("Enter number of three address code statements: ");
    scanf("%d", &n);

    printf("Enter three address code statements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%s = %s %c %s", result, op1, &op, op2);

        printf("\nTarget Code:\n");

        printf("MOV R0, %s\n", op1);

        if (op == '+')
            printf("ADD R0, %s\n", op2);
        else if (op == '-')
            printf("SUB R0, %s\n", op2);
        else if (op == '*')
            printf("MUL R0, %s\n", op2);
        else if (op == '/')
            printf("DIV R0, %s\n", op2);

        printf("MOV %s, R0\n", result);
    }

    return 0;
}