#include <stdio.h>

int main()
{
    int num;

    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive or negative
    if (num > 0)
    {
        printf("The given number is positive.\n");
    }
    else if (num < 0)
    {
        printf("The given number is negative.\n");
    }
    else
    {
        printf("The given number is 0.\n");
    }

    return 0;
}