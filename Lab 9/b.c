#include <stdio.h>

// Function to reverse the digits of a number
int reverseDigit(int number) {
    int reversedNumber = 0;
    
    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }
    
    return reversedNumber;
}

int main() {
    int number, reversedNumber;
    
    printf("Enter a number between 1 and 9999: ");
    scanf("%d", &number);
    
    if (number < 1 || number > 9999) {
        printf("Invalid number! Please enter a number between 1 and 9999.\n");
        return 0;
    }
    
    reversedNumber = reverseDigit(number);
    
    printf("The number with its digits reversed is: %d\n", reversedNumber);
    
    return 0;
}
