#include <iostream>
using namespace std;

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5, pos;

    cout << "Enter position to delete (0 to " << size - 1 << "): ";
    cin >> pos;

    for (int j = pos; j < size - 1; j++) arr[j] = arr[j + 1];
    size--;

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    return 0;
}