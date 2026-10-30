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

void findMinMax(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    int min_val = head->data;
    int max_val = head->data;

    struct Node* current = head->next;
    while (current != NULL) {
        if (current->data < min_val) {
            min_val = current->data;
        }
        if (current->data > max_val) {
            max_val = current->data;
        }
        current = current->next;
    }

    printf("Minimum value = %d\n", min_val);
    printf("Maximum value = %d\n", max_val);
}

int main(void) {
    struct Node* head = NULL;

    append(&head, 18);
    append(&head, -3);
    append(&head, 42);
    append(&head, 7);
    append(&head, 1);
    append(&head, 99);
    append(&head, -11);

    findMinMax(head);

    return 0;
}
