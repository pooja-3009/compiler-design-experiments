#include <stdio.h>

int main()
{
    int num1 = 100;
    float rate = 25.5;
    char ch = 'a';
    int total = 50 + 20;
    int num1_var = 30;
    int count = 40;

    printf("Welcome to Compiler Design\n");

    int x = 9;
    int y = 0xA12;
    float z = 12.34;

    char str1[] = "Hello";
    char str2[] = "World";

    int _valid = 10;
    int invalid_id = 20;

    float value = 5.6;
    int data = 10 + 5;

    char c = 'x';
    int value3 = 60;

    printf("Total = %d\n", total);
    printf("Rate = %.1f\n", rate);
    printf("Character = %c\n", ch);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %.2f\n", z);
    printf("%s %s\n", str1, str2);
    printf("_valid = %d\n", _valid);
    printf("invalid_id = %d\n", invalid_id);
    printf("value = %.1f\n", value);
    printf("data = %d\n", data);
    printf("c = %c\n", c);
    printf("value3 = %d\n", value3);

    return 0;
}