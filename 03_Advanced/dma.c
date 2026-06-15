#include <stdio.h>
#include <stdlib.h> // malloc, calloc aur free ke liye zaroori

/**
 * Dynamic Memory Allocation (DMA) ka misal.
 */
int main() {
    int n = 3;
    int *m_ptr, *c_ptr;

    // 1. malloc(): Memory allocate karta hai lekin initialize nahi karta (garbage value hoti hai)
    m_ptr = (int*)malloc(n * sizeof(int));

    // 2. calloc(): Memory allocate karta hai aur 0 se initialize karta hai
    c_ptr = (int*)calloc(n, sizeof(int));

    if (m_ptr == NULL || c_ptr == NULL) {
        printf("Memory nahi mil saki!\n");
        return 1;
    }

    printf("malloc se allocate kiye gaye numbers (Garbage values ho sakti hain):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", m_ptr[i]);
    }

    printf("\n\ncalloc se allocate kiye gaye numbers (Ye 0 se initialize hote hain):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", c_ptr[i]);
    }
    printf("\n");

    // Memory free karna
    free(m_ptr);
    free(c_ptr);
    printf("\nMemory free kar di gayi hai.\n");

    return 0;
}
