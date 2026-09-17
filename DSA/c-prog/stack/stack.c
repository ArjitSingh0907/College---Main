#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 20

int stack[MAX_SIZE] = {
    1, 2, 3, 4, 56, 7, 8, 9, 10,
    11, 12, 13, 14, 15, 16, 17,
    18, 19, 20
};

int top = 18;

void push(int x) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = x;
    printf("%d pushed into stack\n", x);
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }

    return stack[top--];
}

int main(void) {
    int ch, x;

    printf("Stack Operations");
    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. Exit\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter a value to push: ");
                scanf("%d", &x);
                push(x);
                break;

            case 2:
                x = pop();
                if (x != -1)
                    printf("Popped value: %d\n", x);
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}