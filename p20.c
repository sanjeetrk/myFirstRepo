#include <stdio.h>
int main()
{
    char str1[100]; // Declare the first string with a maximum of 100 characters
    char str2[100]; // Declare the second string with a maximum of 100 characters
    int i;

    printf("Enter the first string: ");
    gets(str1); // Read the first string from the user

    // Copy the first string to the second string
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0'; // Add the null terminator to the end of the second string

    printf("The copied string: %s\n", str2);

    return 0;
}