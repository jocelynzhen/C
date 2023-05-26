#include <stdio.h>

int main()
{
    //Declare variables
    int number;
    float price;
    double gdp;
    char letter;
    long bignumber;
    short participants;
    
    //*********************************Integer*********************************
    //Prompt users to enter value
    printf("Please enter a number: ");

    //Read the value
    scanf("%d", &number);

    //Print the value
    printf("You have entered: %d\n\n", number);



    //*********************************Float*********************************
    //Prompt users to enter value
    printf("Please enter a price: ");

    //Read the value
    scanf("%f", &price);

    //Print the value
    printf("You have entered: %.2f\n\n", price);



    //*********************************Double*********************************
    //Prompt users to enter value
    printf("Please enter gdp: ");

    //Read the value
    scanf("%lf", &gdp);

    //Print the value
    printf("You have entered: %.2lf\n\n", gdp);



    //*********************************Char*********************************
    //Prompt users to enter value
    printf("Please enter a letter: ");

    //Capture the enter
    getchar();

    //Read the value
    scanf("%c", &letter);

    //Print the value
    printf("You have entered: %c\n\n", letter);



    //*********************************Long*********************************
    //Prompt users to enter value
    printf("Please enter a big number: ");

    //Read the value
    scanf("%ld", &bignumber);

    //Print the value
    printf("You have entered: %ld\n\n", bignumber);



    //*********************************Short*********************************
    //Prompt users to enter value
    printf("Please enter participants: ");

    //Read the value
    scanf("%hd", &participants);

    //Print the value
    printf("You have entered: %hd\n\n", participants);

    return 0;
}