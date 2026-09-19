#include <iostream>
using namespace std;

int main(void){
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5;
    int element, pos;

    cout << "Enter element: ";
    cin >> element;

    cout << "Enter position: ";
    cin >> pos;

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