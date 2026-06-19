#include <stdio.h>

// Function declaration (Pehle batana ke aisa function hai)
int jama_karo(int x, int y);
void salam_karo();

int main() {
    salam_karo();

    int result = jama_karo(15, 25);
    printf("15 + 25 ka result hai: %d\n", result);

    return 0;
}

// Function definition (Function kya karta hai)
int jama_karo(int x, int y) {
    return x + y;
}

void salam_karo() {
    printf("Assalam-o-Alaikum! Main aik function hoon.\n");
}
