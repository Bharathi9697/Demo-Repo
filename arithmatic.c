#include <stdio.h>
//#include <stdio.h>

int main() {
    // Declare variables
    float num1, num2, num3;
    
    // Input three numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter third number: ");
    scanf("%f", &num3);


    // Perform arithmetic operations
    float sum = num1 + num2;
    float difference = num2 - num3;
    float product = num1 * num3;
    float modulo = num3 * num2;
    
    // Check if the second number is not zero before performing division
    if (num2 != 0) {
        float quotient = num1 / num2;
        printf("Sum: %.2f\n", sum);
        printf("Difference: %.2f\n", difference);
        printf("Product: %.2f\n", product);
        printf("Quotient: %.2f\n", quotient);
        printf("Modulo: %.2f\n", modulo);
    } else {
        printf("Error: Division by zero is undefined.\n");
        printf("=============================\n");
    }
    scanf("%f", &num2);

    return 0;
}
