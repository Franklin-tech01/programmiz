#include <stdio.h>

int main()
{
    int interger;
    float floating;

    printf("enter number:");
    scanf("%d", &interger);
    printf("\nenter number:");
    scanf("%f", &floating);

    printf("interger = %d\n", interger);
    printf("float = %f\n", floating);

    return 0;
}