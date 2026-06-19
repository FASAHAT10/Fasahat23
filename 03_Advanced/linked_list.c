#include <stdio.h>
#include <stdlib.h>

/**
 * Data Structures: Linked List (Advanced)
 * Linked list mein har element (node) ke paas data aur agle node ka address hota hai.
 */

struct Node {
    int data;
    struct Node* next;
};

// Naya node banane ka function
struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

// List ko print karne ka function
void printList(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Nodes banana
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    printList(head);

    // Memory free karna (Cleanup)
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("Memory free kar di gayi.\n");

    return 0;
}
