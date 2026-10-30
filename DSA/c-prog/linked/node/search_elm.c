#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    struct Node* temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void searchElement(struct Node* head, int target) {
    struct Node* current = head;
    int position = 1;

    while (current != NULL) {
        if (current->data == target) {
            printf("Element %d found at position %d.\n", target, position);
            return;
        }
        current = current->next;
        position++;
    }

    printf("Element %d is not present in the linked list.\n", target);
}

int main(void) {
    struct Node* head = NULL;

    append(&head, 15);
    append(&head, 25);
    append(&head, 35);
    append(&head, 45);

    searchElement(head, 35);
    searchElement(head, 99);

    return 0;
}
