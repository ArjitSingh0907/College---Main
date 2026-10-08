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

void deleteFromEnd(struct Node** head_ref) {
    if (*head_ref == NULL) {
        printf("List is already empty. Underflow!\n");
        return;
    }

    if ((*head_ref)->next == NULL) {
        printf("Deleted element: %d\n", (*head_ref)->data);
        free(*head_ref);
        *head_ref = NULL;
        return;
    }

    struct Node* temp = *head_ref;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    printf("Deleted element: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
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

int main(void) {
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    printf("Original List:\n");
    printList(head);

    printf("\nPerforming deletion from end:\n");
    deleteFromEnd(&head);
    printList(head);

    deleteFromEnd(&head);
    printList(head);

    deleteFromEnd(&head);
    printList(head);

    deleteFromEnd(&head);

    freeList(head);
    return 0;
}