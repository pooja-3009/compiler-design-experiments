#include <stdio.h>
#include <ctype.h>

char expr[100];
int pos = 0;

double E();
double T();
double F();

double E()
{
    double val = T();

    while (expr[pos] == '+' || expr[pos] == '-')
    {
        char op = expr[pos++];
        double val2 = T();

        if (op == '+')
            val = val + val2;
        else
            val = val - val2;
    }

    return val;
}

double T()
{
    double val = F();

    while (expr[pos] == '*' || expr[pos] == '/')
    {
        char op = expr[pos++];
        double val2 = F();

        if (op == '*')
            val = val * val2;
        else
            val = val / val2;
    }

    return val;
}

double F()
{
    double val;

    if (expr[pos] == '(')
    {
        pos++;
        val = E();
        pos++;
    }
    else
    {
        val = expr[pos] - '0';
        pos++;
    }

    return val;
}

int main()
{
    printf("Enter arithmetic expression: ");
    scanf("%s", expr);

    double result = E();

    printf("Result = %.2lf\n", result);

    return 0;
}