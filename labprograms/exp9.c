#include <stdio.h>

int main()
{
    printf("Original Grammar:\n");
    printf("S -> (L) | a\n");
    printf("L -> L,S | S\n\n");

    printf("After Eliminating Left Recursion:\n");
    printf("S  -> (L) | a\n");
    printf("L  -> S L'\n");
    printf("L' -> , S L' | epsilon\n");

    return 0;
}