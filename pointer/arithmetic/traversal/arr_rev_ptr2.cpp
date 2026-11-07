#include <iostream>
using namespace std;

int main(void){
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *left = arr;
    int *right = &arr[size - 1];

    while (left < right){
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    int *ptr = arr;
    for (int i = 0 ; i < size ; i++){
        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}