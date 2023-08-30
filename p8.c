#include <stdio.h>

int main()
{
    int num, i, fact = 1;

    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to calculate the factorial
    for (i = 1; i <= num; i++)
    {
        fact *= i;
    }

    // Print the result
    printf("The factorial of %d is: %d\n", num, fact);

    return 0;
}