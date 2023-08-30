#include <stdio.h>

int main()
{
    char c;

    // Get input from user
    printf("Enter a character: ");
    scanf("%c", &c);

    // Print the ASCII value of the character
    printf("The ASCII value of %c is: %d\n", c, c);

    return 0;
}