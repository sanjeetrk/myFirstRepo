#include <stdio.h>

int main()
{
    char c;

    // Get input from user
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // Check if the alphabet is a vowel or consonant
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("%c is  a vowel.\n", c);
    }
    else
    {
        printf("%c is a consonant.\n", c);
    }

    return 0;
}