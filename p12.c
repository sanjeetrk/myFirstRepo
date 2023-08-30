#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]; // Declare a string with a maximum of 100 characters

    printf("Enter a string : ");
    gets(str); // Read the string from the user

    // Convert the string to lowercase
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            // Add 32 to the ASCII value of the character to convert it to lowercase
            str[i] = str[i] + 32;
        }
    }

    printf("The string in lowercase: %s\n", str);

    return 0;
}