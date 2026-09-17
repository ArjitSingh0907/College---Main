#include <stdio.h>
#define max 100

int stack[max];
int top = -1;

int main(void){
    int n, value;

    printf("Enter the number of elements to push onto the stack: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value to push onto the stack: ");
        scanf("%d", &value);
        if (top == max - 1) {
            printf("Stack overflow! Cannot push %d onto the stack.\n", value);
        } else {
            stack[++top] = value;
            printf("%d pushed onto the stack.\n", value);
        }
    }
    printf("Stack elements : ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    return 0;
}