#include <stdio.h>

/**
 * Bitwise Operators: Bits (0 aur 1) ke level par kaam karna.
 * & (AND), | (OR), ^ (XOR), ~ (NOT), << (Left Shift), >> (Right Shift)
 */
int main() {
    unsigned int a = 5;  // 0101 in binary
    unsigned int b = 9;  // 1001 in binary

    printf("a = %u (0101), b = %u (1001)\n\n", a, b);

    printf("a & b (AND) = %u (0001)\n", a & b);
    printf("a | b (OR)  = %u (1101)\n", a | b);
    printf("a ^ b (XOR) = %u (1100)\n", a ^ b);
    printf("~a (NOT)    = %u\n", ~a);
    printf("a << 1 (Left Shift)  = %u (1010, yani 10)\n", a << 1);
    printf("a >> 1 (Right Shift) = %u (0010, yani 2)\n", a >> 1);

    return 0;
}
