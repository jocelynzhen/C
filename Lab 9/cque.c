#include <stdio.h>

// Function to calculate sales earnings
float calculate_sales(float grossSales) {
    float salary = 100.0; // Base salary per week
    float commission = 0.15 * grossSales; // 15% commission on gross sales
    float earnings = salary + commission;
    return earnings;
}

int main() {
    float grossSales, earnings;
    
    printf("Enter sales: RM");
    scanf("%f", &grossSales);
    
    earnings = calculate_sales(grossSales);
    
    printf("Salary is RM%.2f\n", earnings);
    
    return 0;
}
