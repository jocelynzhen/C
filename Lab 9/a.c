#include <stdio.h>

#define PI 3.14159

// Function to calculate the diameter
double calculateDiameter(double radius) {
    return 2 * radius;
}

// Function to calculate the circumference
double calculateCircumference(double radius) {
    return 2 * PI * radius;
}

// Function to calculate the area
double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;
    char option;

    printf("Enter value for radius (cm): ");
    scanf("%lf", &radius);

    printf("Calculate:\n");
    printf("(A)rea\n");
    printf("(C)ircumference\n");
    printf("(D)iameter\n");
    printf("Option: ");
    scanf(" %c", &option);

    switch (option) {
        case 'A':
        case 'a':
            printf("The area of the circle in cm is %.2f\n", calculateArea(radius));
            break;
        case 'C':
        case 'c':
            printf("The circumference of the circle in cm is %.2f\n", calculateCircumference(radius));
            break;
        case 'D':
        case 'd':
            printf("The diameter of the circle in cm is %.2f\n", calculateDiameter(radius));
            break;
        default:
            printf("Invalid option!\n");
    }

    return 0;
}
