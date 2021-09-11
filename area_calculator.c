#include <stdio.h>

/* calculates and prints out the area and of a shape of choice.
The shape can be a circle, a rectangle or a triangle.*/


int main(void)
{
    float width, height, area, rad; // Declaration of variables
    int s; // Object shape
    float pi_approx = 3.1415; // Pi approximation

    // Shape type as an input
    printf("Please enter the shape of the object (1 = rectangle 2 = triangle 3 = circle): ");
    scanf("%d", &s);

    if (s == 1)
    {
    printf("\nPlease enter the width of the rectangle: ");
    scanf("%f", &width); // Rectangle width

    printf("\nPlease enter the height of the rectangle: ");
    scanf("%f", &height); // Rectangle height

    area = width * height; // Rectangle area

    printf("\nThe area of a %f x %f rectangle is %f:", width, height, area);

    }

    else if (s == 2)
    {
    printf("\nPlease enter the width of the triangle: ");
    scanf("%f", &width); // Rectangle width

    printf("\nPlease enter the height of the triangle: ");
    scanf("%f", &height); // Rectangle height

    area = width * height / 2; // Rectangle area

    printf("\nThe area of a %f x %f triangle is %f:", width, height, area);
    }

    else if (s == 3)
    {
    printf("\nPlease enter the radius of the circle: ");
    scanf("%f", &rad);

    area = pi_approx * rad * rad;

    printf("\nThe area of a circle with radius %f is %f:", rad, area);
    }

    return 0;
}
