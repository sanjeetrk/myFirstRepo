#include <stdio.h>

int main()
{
    int arr[100]; // Declare an array of integers with a maximum of 100 elements
    int n;        // Declare a variable to store the number of elements in the array

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); // Read the number of elements from the user

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read the elements of the array from the user
    }

    printf("The number of elements in the array is: %d\n", n);

    return 0;
}