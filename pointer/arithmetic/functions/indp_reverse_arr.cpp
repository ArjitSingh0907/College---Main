#include <iostream>
using namespace std;

void reverse_array(int arr[], int size){
    int *left = arr;
    int *right = arr + (size - 1);
    while (left < right){
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
    cout << "After reversing the array -> ";
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void){
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(array)/sizeof(array[0]);
    cout << "Before reversing the array -> ";
    for (int i = 0 ; i < size ; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    reverse_array(array, size);
    return 0;
}