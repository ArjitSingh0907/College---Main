#include <iostream>
using namespace std;

int main(void){
    int arr[10] = {11, 22, 33, 44, 55};
    int size = 5;

    int pos = size / 2;
    int element = 99;

    for(int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    size++;

    cout << "Updated array: ";

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}