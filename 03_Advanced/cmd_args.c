#include <stdio.h>

/**
 * Command Line Arguments:
 * Jab hum program chalaate waqt bahar se data dete hain.
 * argc: Arguments ki tadad.
 * argv: Arguments ki list (Strings).
 */
int main(int argc, char *argv[]) {
    printf("Arguments ki total tadad: %d\n", argc);

    printf("Program ka naam: %s\n", argv[0]);

    if (argc > 1) {
        printf("Aap ne ye arguments diye:\n");
        for (int i = 1; i < argc; i++) {
            printf("Arg %d: %s\n", i, argv[i]);
        }
    } else {
        printf("Koi extra argument nahi diya gaya.\n");
        printf("Try: ./cmd_args salam pakistan\n");
    }

    return 0;
}
