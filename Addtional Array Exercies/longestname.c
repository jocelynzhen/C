#include <stdio.h>

int main()
{
    char name[5][25];

    printf("Enter 5 students' name: ");
    fgets(name, 500, stdin);

    printf("Name: %c", name);

    return 0;
}
