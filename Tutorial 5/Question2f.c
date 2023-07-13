#include <stdio.h>

// Function to increment array elements
void incrementFunction(int *array, int size, int increment) {
    for (int i = 0; i < size; i++) {
        array[i] += increment;
    }
}

int main() {
    // Declaration and initialization of array x
    static int x[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    
    // Size of the array
    int size = sizeof(x) / sizeof(x[0]);

    // Displaying the original array
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    // Incrementing the array elements using the incrementFunction
    int increment = 5;
    incrementFunction(x, size, increment);

    // Displaying the modified array
    printf("Modified Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}
