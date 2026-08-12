#include <stdio.h>
#include <string.h>
#include <ctype.h>

char expr[100];
int temp = 1;

void generateTAC()
{
    int i;
    char op1, op2, op;
    char result[10];

    for (i = 0; expr[i] != '\0'; i++)
    {
        if (expr[i] == '*' || expr[i] == '/')
        {
            op1 = expr[i - 1];
            op = expr[i];
            op2 = expr[i + 1];

            sprintf(result, "t%d", temp++);

            printf("%s = %c %c %c\n",
                   result, op1, op, op2);

            expr[i - 1] = result[0];
            expr[i] = '\0';
            expr[i + 1] = '\0';

            break;
        }
    }

    for (i = 0; expr[i] != '\0'; i++)
    {
        if (expr[i] == '+' || expr[i] == '-')
        {
            op1 = expr[i - 1];
            op = expr[i];
            op2 = expr[i + 1];

            sprintf(result, "t%d", temp++);

            printf("%s = %c %c %c\n",
                   result, op1, op, op2);

            break;
        }
    }
}

int main()
{
    printf("Enter an expression: ");
    scanf("%s", expr);

    printf("\nThree Address Code:\n");

    generateTAC();

    return 0;
}