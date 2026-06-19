#include <stdio.h>

/**
 * Is program mein hum variables aur data types ko samjhein ge.
 */
int main() {
    // Integer (Pura number)
    int saal = 2024;

    // Float (Decimal number)
    float petrol_price = 272.50;

    // Character (Single letter)
    char grade = 'A';

    // Printing variables
    // %d integer ke liye, %f float ke liye, %c char ke liye
    printf("Saal: %d\n", saal);
    printf("Petrol Price: %.2f\n", petrol_price);
    printf("Grade: %c\n", grade);

    return 0;
}
