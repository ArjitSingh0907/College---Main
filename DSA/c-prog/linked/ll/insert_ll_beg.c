#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createNode(int data) {
    struct node* newNode = malloc(sizeof(struct node));

    if(newNode == NULL) {
        printf("Memory Allocation Failed\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

int main(void) {
    struct node* head = createNode(100);
    printf("%d\n", head->data);
    free(head);
    return 0;
}