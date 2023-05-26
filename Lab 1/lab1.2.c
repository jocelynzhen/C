#include <stdio.h>
 int main()
 {
    //Declare varirables
    int num1, num2, sum;

    //Prompt users to enter numbers
    printf("Please enter 2 numbers: ");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

 }