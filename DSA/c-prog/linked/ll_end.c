#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *create_node(int data){
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void insert_end(struct Node **head, int data){
    struct Node *new_node = create_node(data);
    if(*head == NULL){
        *head = new_node;
        return;
    }
    struct Node *temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void display_node(struct Node *head){
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(void){
    struct Node *head = NULL;
    int n, data;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insert_end(&head, data);
    }

    printf("Linked List : ");
    display_node(head);
    return 0;
}