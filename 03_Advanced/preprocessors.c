#include <stdio.h>

// Macros define karna
#define PI 3.14159
#define SQUARE(x) (x * x)

/**
 * Preprocessors: # se shuru hone wali lines.
 */
int main() {
    float radius = 5.0;
    float area = PI * SQUARE(radius);

    printf("Radius: %.1f\n", radius);
    printf("Area of Circle: %.2f\n", area);

    #ifdef PI
        printf("PI defined hai.\n");
    #endif

    return 0;
}
