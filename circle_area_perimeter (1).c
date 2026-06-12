#include <stdio.h>

int main()
{
    float r, a, p;

    printf("Enter Radius:\t");
    scanf("%f", &r);

    a = (3.14) * r * r;
    printf("The area of circle with radius %f is: %f", r, a);

    p = 2 * 3.14 * r;
    printf("\nThe perimeter of circle with radius %f is: %f", r, p);

    return 0;
}
