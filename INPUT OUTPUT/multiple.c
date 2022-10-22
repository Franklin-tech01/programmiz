#include <stdio.h>

int main()
{
    double number;
    char alphabet;

    printf("Enter  any input: ");
        scanf( "%lf %c", &number, &alphabet);

    printf("Number: %lf\n", number);
    printf("Alphabet: %c\n", alphabet);
    return 0;
}