#include <iostream>
using namespace std;

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5, element;

    cout << "Enter element to insert at end: ";
    cin >> element;

    arr[size] = element;
    size++;

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    return 0;
}