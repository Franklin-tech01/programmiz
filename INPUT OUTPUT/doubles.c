#include <stdio.h>

int main()
{
    double number;
    char alphabet;

    printf("Enter double number: ");
        scanf( "%lf",&number);
    printf("Enter character input: ");
        scanf(" \n%c", &alphabet);

    printf("Number: %lf\n", number);
    printf("Alphabet: %c\n", alphabet);
    return 0;
}