#include <stdio.h>

int main()
{
    int num;

    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is odd or even
    if (num % 2 == 0)
    {
        printf("%d is even.\n", num);
    }
    else
    {
        printf("%d is odd.\n", num);
    }

    return 0;
}