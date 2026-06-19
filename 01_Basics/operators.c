#include <stdio.h>

/**
 * Operators ka istemal math aur logic ke liye.
 */
int main() {
    int a = 10, b = 3;

    // Arithmetic Operators
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Remainder (Modulus): %d\n", a % b);

    // Relational Operators (Compare karte hain)
    if (a > b) {
        printf("a, b se bara hai\n");
    }

    return 0;
}
