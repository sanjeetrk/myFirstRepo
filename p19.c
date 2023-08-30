#include <stdio.h>
#include <string.h>

#define MAX 100 // Define a constant for the maximum size of the string

int main()
{
    char str[MAX]; // Declare a string with a maximum of 100 characters

    printf("Enter a string: ");
    gets(str); // Read the string from the user

    int count[MAX]; // Declare an array to store the frequency of each character in the string

    // Initialize the count array with 0
    for (int i = 0; i < MAX; i++)
    {
        count[i] = 0;
    }

    // Count the frequency of each character in the string
    for (int i = 0; i < strlen(str); i++)
    {
        count[str[i] - 'a']++;
    }

    printf("The frequency of each character in the string:\n");
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            // Print the frequency of each character in the string
            printf("%c: %d\n", i + 'a', count[i]); 
        }
    }

    return 0;
}