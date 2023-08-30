#include <stdio.h>
#include <math.h>

int main()
{
    float side, area;

    // Get input from user
    printf("Enter the length of the side: ");
    scanf("%f", &side);

    // Calculate the area
    area = (sqrt(3) / 4) * (side * side);

    // Print the result
    printf("The area of the equilateral triangle is: %f\n", area);

    return 0;
}