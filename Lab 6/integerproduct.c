#include <stdio.h>

int main()
{
    int num;
    int product = 1;

    while (1)
    {
        printf("Please enter an integer: ");
        scanf("%d", &num);

        if (num < 0)
            break;

        product *= num;
    }

    printf("Total (product): %d\n", product);

    return 0;
}