#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int value){
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = value;
    new_node -> next = top;
    top = new_node;
    printf("%d pushed onto the stack.\n", value);
}

int pop(){
    if(top == NULL){
        printf("Stack underflow! Cannot pop from the stack.\n");
        return -1;
    } else {
        struct node *temp = top;
        int value = top -> data;

        top = top -> next;
        free(temp);

        return value;
    }
}

void display(){
    if(top == NULL){
        printf("Stack is empty.\n");
    } else {
        struct node *temp = top;
        printf("Stack elements: ");
        while(temp != NULL){
            printf("%d ", temp -> data);
            temp = temp -> next;
        }
        printf("\n");
    }
}

int main(void){
    int choice, value;

    while(1){
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter value to push onto the stack: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}