#include <iostream>
using namespace std;

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5, element, pos = -1;

    cout << "Enter element to delete: ";
    cin >> element;

    for (int i = 0; i < size; i++) {
        if (arr[i] == element) { pos = i; break; }
    }

    if (pos != -1) {
        for (int j = pos; j < size - 1; j++) arr[j] = arr[j + 1];
        size--;
        cout << "Updated array: ";
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
    } else {
        cout << "Element not found!";
    }
    return 0;
}