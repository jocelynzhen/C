#include <stdio.h>
int main()
{
    int num, i;
    int largest = -300;

    for(i=1; i<=5; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &num);
        if(num>largest)
        {
            largest = num;

        }
    } 
        

    printf("The largest number is: %d\n", largest);

    return 0;
}