#include <iostream>
using namespace std;

int main(void){
    int arr[] = {1, 2, 3, 4, 10, 20, 30, 40};
    int *left = arr + 4;
    int size = sizeof(arr) / sizeof(arr[0]);
    int *right = &arr[size - 1];

    while (left <= right){
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