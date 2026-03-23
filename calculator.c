#include <stdio.h>

int main() {
    char operator;
    double first, second;

    printf("Enter an operator (+, -, *, /): ");
    if (scanf(" %c", &operator) != 1) {
        printf("Error reading operator.\n");
        return 1;
    }

    printf("Enter two operands: ");
    if (scanf("%lf %lf", &first, &second) != 2) {
        printf("Error reading numbers.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", first, second, first + second);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", first, second, first - second);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", first, second, first * second);
            break;
        case '/':
            if (second != 0.0)
                printf("%.2lf / %.2lf = %.2lf\n", first, second, first / second);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Error! operator is not correct\n");
    }

    return 0;
}
