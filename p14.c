#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000], s2[1000];
    int i, j;

    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
    j = strlen(s1);

    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[i + j] = s2[i];
    }
    s1[i + j] = '\0';

    printf("combined two strings =%s\n", s1);

    return 0;
}
