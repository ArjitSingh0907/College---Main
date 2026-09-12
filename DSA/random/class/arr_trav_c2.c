#include <stdio.h>

int main(void){
    int elm;
    printf("Enter the number of elements: ");
    scanf("%d", &elm);
    int arr[elm];
    printf("Enter the elements: ");
    for (int i = 0 ; i < elm ; i++){
        scanf("%d", &arr[i]);
    }
    printf("The elements are: ");
    for (int j = 0 ; j < elm ; j++){
        printf("%d ", arr[j]);
    }
    printf("\n");
    return 0;
}