#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    int i, at = 0, dot = 0;

    printf("Enter Email: ");
    scanf("%s", email);

    for(i = 0; email[i] != '\0'; i++)
    {
        if(email[i] == '@')
            at++;

        if(email[i] == '.')
            dot++;
    }

    if(at == 1 && dot >= 1)
        printf("Valid Email");
    else
        printf("Invalid Email");

    return 0;
}