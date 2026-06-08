#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // Input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Switch case
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2f", result);
            } else {
                printf("Error! Division by 
zero.");
         }
         break;
        
        default:
           printf("Invalid operator");
}
return 0;
}