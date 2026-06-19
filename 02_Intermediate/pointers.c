#include <stdio.h>

/**
 * Pointers: Ye memory ka pata (address) store karte hain.
 */
int main() {
    int nishana = 100;
    int *pata = &nishana; // 'pata' pointer hai jo 'nishana' ka address store kar raha hai

    printf("Variable ki value: %d\n", nishana);
    printf("Variable ka address: %p\n", (void*)&nishana);
    printf("Pointer mein store address: %p\n", (void*)pata);
    printf("Pointer ke zariye value: %d\n", *pata); // Dereferencing

    // Pointer ke zariye value tabdeel karna
    *pata = 200;
    printf("\nNayi value (pointer ke baad): %d\n", nishana);

    return 0;
}
