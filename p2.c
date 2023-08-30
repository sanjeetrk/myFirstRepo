#include <stdio.h>

int main()
{
    int num, count = 0;

    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of digits in %d is  ", num);

    // Loop until the number is 0
    while (num != 0)
    {
        // Divide the number by 10 to remove the last digit
        num /= 10;
        // Increment the count
        count++;
    }

    // Print the result
    printf("%d\n", count);

    return 0;
}