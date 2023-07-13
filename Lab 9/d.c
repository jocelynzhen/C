#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("%d! = %d\n", num, result);

    return 0;
}
