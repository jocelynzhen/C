#include <stdio.h>

int main() 
{
    int numbers[10];
    int i;
    int evenCount = 0;
    int oddCount = 0;

    printf("Key in 10 numbers: ");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) 
        {
            evenCount++;
        } 
        else 
        {
            oddCount++;
        }
    }

    printf("The total number of even numbers entered are: %d\n", evenCount);
    printf("The total number of odd numbers entered are: %d\n\n", oddCount);

    return 0;
}