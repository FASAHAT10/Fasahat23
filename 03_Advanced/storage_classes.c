#include <stdio.h>

/**
 * Storage Classes: Variables ki life aur scope batati hain.
 * auto, register, static, extern
 */

void test_static() {
    static int count = 0; // Ye memory mein rehta hai jab tak program khatam na ho
    count++;
    printf("Static count: %d\n", count);
}

int main() {
    printf("--- Static Variable Example ---\n");
    test_static();
    test_static();
    test_static();

    // auto (Default hota hai, function khatam hote hi variable khatam)
    auto int x = 10;
    printf("\nAuto variable x: %d\n", x);

    return 0;
}
