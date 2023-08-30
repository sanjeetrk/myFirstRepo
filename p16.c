#include <stdio.h>

int main()
{
    int num1, num2; // Declare two variables to store the numbers

    printf("Enter the first number: ");
    scanf("%d", &num1); // Read the first number from the user

    printf("Enter the second number: ");
    scanf("%d", &num2); // Read the second number from the user

    // Swap the two numbers
    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping, the first number is: %d\n", num1);
    printf("After swapping, the second number is: %d\n", num2);

    return 0;
}