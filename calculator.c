#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    float num1, num2, result;
    int running = 1;

    printf("=== Advanced Calculator ===\n");
    printf("Operators: + - * / %% ^ s(sqrt) l(log)\n");
    printf("Type 'q' to quit\n\n");

    while (running) {
        printf("Enter operator: ");
        scanf(" %c", &operator);

        if (operator == 'q') {
            printf("Goodbye!\n");
            break;
        }

        // Single-number operations
        if (operator == 's' || operator == 'l') {
            printf("Enter a number: ");
            scanf("%f", &num1);

            switch (operator) {
                case 's':
                    if (num1 < 0)
                        printf("Error! Cannot sqrt a negative number.\n");
                    else
                        printf("Result = %.2f\n", sqrtf(num1));
                    break;

                case 'l':
                    if (num1 <= 0)
                        printf("Error! Log undefined for zero or negative.\n");
                    else
                        printf("Result = %.2f\n", log10f(num1));
                    break;
            }

        } else {
            // Two-number operations
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            switch (operator) {
                case '+':
                    printf("Result = %.2f\n", num1 + num2);
                    break;

                case '-':
                    printf("Result = %.2f\n", num1 - num2);
                    break;

                case '*':
                    printf("Result = %.2f\n", num1 * num2);
                    break;

                case '/':
                    if (num2 == 0)
                        printf("Error! Division by zero.\n");
                    else
                        printf("Result = %.2f\n", num1 / num2);
                    break;

                case '%':
                    if ((int)num2 == 0)
                        printf("Error! Modulo by zero.\n");
                    else
                        printf("Result = %d\n", (int)num1 % (int)num2);
                    break;

                case '^':
                    printf("Result = %.2f\n", powf(num1, num2));
                    break;

                default:
                    printf("Invalid operator! Try: + - * / %% ^ s l\n");
            }
        }

        printf("\n");
    }

    return 0;
}