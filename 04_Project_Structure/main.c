#include <stdio.h>
#include "math_utils.h"

/**
 * Main File:
 * Ye hamara main program hai jo header file ke zariye doosri files ke functions use karta hai.
 *
 * Compile command: gcc main.c math_utils.c -o my_app
 */

int main() {
    int num = 4;

    printf("Number: %d\n", num);
    printf("Square: %d\n", square(num));
    printf("Cube: %d\n", cube(num));

    return 0;
}
