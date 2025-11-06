/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/

#include <stdio.h>

int main() {
    int a, b;
    char op;
    float result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            result = a + b;
            printf("\nResult = %.2f\n", result);
            break;
        case '-':
            result = a - b;
            printf("\nResult = %.2f\n", result);
            break;
        case '*':
            result = a * b;
            printf("\nResult = %.2f\n", result);
            break;
        case '/':
            if (b != 0) {
                result = (float)a / b;
                printf("\nResult = %.2f\n", result);
            } else {
                printf("\nError: Division by zero!\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("\nResult = %d\n", a % b);
            } else {
                printf("\nError: Division by zero!\n");
            }
            break;
        default:
            printf("\nInvalid operator.\n");
    }

    return 0;
}