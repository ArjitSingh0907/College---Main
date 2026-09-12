#include <iostream>
using namespace std;

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5, element, pos;

    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position (0 to " << size << "): ";
    cin >> pos;

    for (int j = size; j > pos; j--) arr[j] = arr[j - 1];
    arr[pos] = element;
    size++;

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    return 0;
}