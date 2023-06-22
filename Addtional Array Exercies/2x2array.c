#include <stdio.h>

int main()
{

    int matrix[2][2];

    printf("Enter Matrix Values: ");

    for(int i = 0;i<2;i++)
    {
        for(int j = 0; j<2;j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMultiplied Matrix: \n");

    for(int i = 0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            matrix[i][j] *= 2;
            printf("%2d, ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}