#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[20];
    int size;

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

    for (int i = 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }
    size--;

    printf("Updated array after deletion from beginning -> ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
