#include <stdio.h>

/**
 * Arrays ka istemal multiple values store karne ke liye.
 */
int main() {
    // 5 integers ka array
    int marks[5] = {85, 90, 78, 92, 88};

    printf("Pehle student ke marks: %d\n", marks[0]);
    printf("Teesre student ke marks: %d\n", marks[2]);

    // Loop ke zariye saare marks print karna
    printf("\nSaare marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
