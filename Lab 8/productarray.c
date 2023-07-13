#include <stdio.h>
int main()
{
    int totalNumbers, i, product = 1;

    printf("Enter total numbers to read: ");
    scanf("%d", &totalNumbers);

    int numbers[totalNumbers];
    printf("Key in %d numbers: ", totalNumbers);

    for(i=0; i<totalNumbers; i++)
    {
        scanf("%d", &numbers[i]);
        product = product * numbers[i];
    }

    printf("\nThe product: %d\n\n", product);

    return 0;
}