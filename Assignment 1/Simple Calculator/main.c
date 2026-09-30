#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    char op;
    double a;
    double b;
    double result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("%.2lf + %.2lf = %.2lf\n", a, b, result);
            break;

        case '-':
            result = a - b;
            printf("%.2lf - %.2lf = %.2lf\n", a, b, result);
            break;

        case '*':
            result = a * b;
            printf("%.2lf * %.2lf = %.2lf\n", a, b, result);
            break;

        case '/':
            if (b!= 0) {
                result = a / b;
                printf("%.2lf / %.2lf = %.2lf\n", a, b, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
