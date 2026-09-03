#include <stdio.h>

int binarysearch(int arr[], int n, int key){
    int low = 0, high = n - 1;

    while (low <= high){
        int mid = (low + high) / 2;

        if (arr[mid] == key){
            return mid;
        } else if (arr[mid] < key){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(void){
    int n, key;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter elements to search for : \n");
    scanf("%d", &key);

    int result = binarysearch(arr, n, key);

    if (result != -1){
        printf("Element found at index %d. \n", result);
    } else {
        printf("Element not found.\n");
    }
    printf("Arjit Singh\n");
    printf("A50105225074\n");
    return 0;
}