#include <stdio.h>
int main ()
{
    float radius, pi, area, circumference;
    pi = 3.142;

    while (1)
    {
	    printf("Please enter radius in cm: ");
	    scanf("%f", &radius);
	    if (radius<=0) 
        {
		    printf("Radius must be a positve number. Please enter again.\n");
		    continue;
        }
	    else
        {
		    break;
        }
    }

	circumference = 2*pi*radius;
	area = pi*(radius*radius);

	printf("Circumference: %.2f cm\n", circumference);
	printf("Area: %.2f cm\n", area);
    
    return 0;
}