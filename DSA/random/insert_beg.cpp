#include <iostream>
using namespace std;

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5, element;

    cout << "Enter element to insert at beginning: ";
    cin >> element;

    for (int j = size; j > 0; j--) arr[j] = arr[j - 1];
    arr[0] = element;
    size++;

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    return 0;
}