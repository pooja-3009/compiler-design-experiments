#include <stdio.h>

int divide(int a, int b)
{
    if (b == 0)
    {
        printf("Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

int main()
{
    int value = 20;
    float num = 15.5;
    int result;

    result = divide(10, 2);

    if (result == 5)
    {
        printf("Result is 5\n");
    }

    int x = 10;
    int y = 2;
    int z = x / y;
    printf("Division Result = %d\n", z);

    int arr[4] = {1, 2, 3, 4};
    printf("%d\n", arr[3]);

    int data = 25;
    int *ptr = &data;
    printf("Pointer Value = %d\n", *ptr);

    int total;
    total = x + y * result;

    printf("Total = %d\n", total);

    while (x < 20)
    {
        printf("%d\n", x);
        x++;
    }

    return 0;
}