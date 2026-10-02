#include <stdio.h>

// Function declaration
int findSquare(int number);

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = findSquare(number);

    printf("Square = %d\n", result);

    return 0;
}

// Function definition
int findSquare(int number)
{
    return number * number;
}
