// C program to find the length of string
#include <stdio.h>
#include <string.h>

int main()
{

    char Str[1000];

    int i;

    printf("Enter the String: ");

    gets(Str);

    for (i = 0; Str[i] != '\0'; ++i);

    printf("Length of String is %d", i);

    return 0;
}
