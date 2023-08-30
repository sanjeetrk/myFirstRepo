#include <stdio.h>

int main() {
  int num1, num2; // Declare two variables to store the numbers
  int *ptr1 = &num1; // Declare a pointer and initialize it with the address of the first number
  int *ptr2 = &num2; // Declare a pointer and initialize it with the address of the second number

  printf("Enter the first number: ");
  scanf("%d", ptr1); // Read the first number from the user using the pointer

  printf("Enter the second number: ");
  scanf("%d", ptr2); // Read the second number from the user using the pointer

  int sum = *ptr1 + *ptr2; // Add the two numbers using the pointers

  printf("The sum of the two numbers is: %d\n", sum);

  return 0;
}