#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 10, 15, 20, 25};
    int size = 5;
    int pos = 2;
    int element = 100;

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