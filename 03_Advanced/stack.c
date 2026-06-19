#include <stdio.h>
#define MAX 5

/**
 * Data Structures: Stack (LIFO - Last In First Out)
 * Jaise plateon ka dher, jo aakhir mein rakhi wo pehle uthayi jayegi.
 */

int stack[MAX];
int top = -1;

void push(int val) {
    if (top == MAX - 1) {
        printf("Stack full hai!\n");
    } else {
        top++;
        stack[top] = val;
        printf("%d push kiya gaya.\n", val);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack khali hai!\n");
    } else {
        printf("%d pop kiya gaya.\n", stack[top]);
        top--;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    pop();
    pop();

    return 0;
}
