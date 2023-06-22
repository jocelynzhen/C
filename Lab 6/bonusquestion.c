#include <stdio.h>
int main() {
    int val, total, times, option;
    printf("Enter a value:"); 
    scanf("%d", &val);
    printf("Enter times:"); 
    scanf("%d", &times);
    printf("========================");
    printf("\n||\t\t Menu\t\t\t ||");
    printf("\n| 1) Addition It\t\t||");
    printf("\n|| 2) multiplication\t||");
    printf("========================");
    printf("InEnter option:");
    scanf("%d", &option);
    switch(option){
        case 1: total = 0;
            for (int i =0; i<times;i++)
                total += val;
            break;
        case 2: total = 1;
            for (int i =0; i<times;i++)
                total *= val;
    }
    printf("Total: %d", total);
    return 0;
}