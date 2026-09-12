#include <iostream>
using namespace std;

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5;

    for (int j = 0; j < size - 1; j++) arr[j] = arr[j + 1];
    size--;

    cout << "Updated array after deleting first element: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    return 0;
}