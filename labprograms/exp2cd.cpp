#include <stdio.h>
#include <string.h>

int main()
{
    char com[100];
    int i, flag = 0;

    printf("Enter comment: ");
    gets(com);

    if(com[0] == '/' && com[1] == '/')
    {
        printf("It is a comment");
    }
    else if(com[0] == '/' && com[1] == '*')
    {
        for(i = 2; com[i] != '\0'; i++)
        {
            if(com[i] == '*' && com[i + 1] == '/')
            {
                flag = 1;
                break;
            }
        }

        if(flag)
            printf("It is a comment");
        else
            printf("It is not a comment");
    }
    else
    {
        printf("It is not a comment");
    }

    return 0;
}