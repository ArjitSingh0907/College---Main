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

void insertAfterNode(struct Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("The given previous node cannot be NULL.\n");
        return;
    }

    struct Node* newNode = createNode(new_data);
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}

struct Node* findNode(struct Node* head, int target) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == target) {
            return current;
        }
        current = current->next;
    }
    return NULL;
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
    head->next = createNode(30);

    printf("Original List:\n");
    printList(head);

    printf("\nFinding node 10 and inserting 20 after it:\n");
    struct Node* targetNode = findNode(head, 10);
    if (targetNode != NULL) {
        insertAfterNode(targetNode, 20);
    }
    printList(head);

    printf("\nFinding node 30 and inserting 40 after it:\n");
    targetNode = findNode(head, 20);
    if (targetNode != NULL) {
        insertAfterNode(targetNode, 40);
    }
    printList(head);

    freeList(head);
    return 0;
}