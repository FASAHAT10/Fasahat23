#include <stdio.h>

/**
 * Control Flow: If-else aur Loops
 */
int main() {
    int number = 10;

    // 1. If-Else
    printf("--- If-Else ---\n");
    if (number % 2 == 0) {
        printf("%d aik Even number hai.\n", number);
    } else {
        printf("%d aik Odd number hai.\n", number);
    }

    // 2. For Loop (1 se 5 tak ginti)
    printf("\n--- For Loop ---\n");
    for (int i = 1; i <= 5; i++) {
        printf("Ginti: %d\n", i);
    }

    // 3. While Loop
    printf("\n--- While Loop ---\n");
    int j = 1;
    while (j <= 3) {
        printf("Loop Number: %d\n", j);
        j++;
    }

    return 0;
}
