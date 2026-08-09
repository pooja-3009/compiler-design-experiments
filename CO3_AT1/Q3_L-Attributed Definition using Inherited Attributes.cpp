#include <stdio.h>

int calculate(char op, int left, int right)
{
    if (op == '+')
        return left + right;

    if (op == '-')
        return left - right;

    if (op == '*')
        return left * right;

    if (op == '/')
        return left / right;

    return 0;
}

/* Simulates inherited attribute passing */
int evaluateT(int a, int b, int inherited)
{
    int multiplication = calculate('*', b, inherited);
    return calculate('+', a, multiplication);
}

int main()
{
    int a, b, c;
    int result;

    printf("Expression: a + b * c\n");

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    /* c is passed as an inherited attribute */
    result = evaluateT(a, b, c);

    printf("b * c = %d\n", b * c);
    printf("a + (b * c) = %d\n", result);

    return 0;
}