#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[20];
    int size, element;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Initial array -> ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter element to insert at end: ");
    scanf("%d", &element);

    arr[size] = element;
    size++;

    printf("Updated array -> ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
