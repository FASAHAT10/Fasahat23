#include <stdio.h>
#include <string.h>

/**
 * Strings: Characters ka array
 */
int main() {
    // String declare karna
    char naam[] = "Jules";

    printf("Mera naam hai: %s\n", naam);

    // String length maloom karna (%zu standard hai size_t ke liye)
    printf("Naam ki lambai: %zu\n", strlen(naam));

    // Do strings ko compare karna
    if (strcmp(naam, "Jules") == 0) {
        printf("Naam match karta hai!\n");
    }

    return 0;
}
