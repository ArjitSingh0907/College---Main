#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void deleteFromBeginning(struct Node** head_ref) {
    if (*head_ref == NULL) {
        printf("List is already empty. Underflow!\n");
        return;
    }

    struct Node* temp = *head_ref;
    *head_ref = (*head_ref)->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    head->next->next->next->next = createNode(50);

    printf("Original List:\n");
    printList(head);

    printf("\nPerforming deletion:\n");
    deleteFromBeginning(&head);
    printList(head);

    deleteFromBeginning(&head);
    printList(head);

    deleteFromBeginning(&head);
    printList(head);

    deleteFromBeginning(&head);

    freeList(head);
    return 0;
}