#include <iostream>
using namespace std;

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5;

    size--; // remove last element

    cout << "Updated array after deleting last element: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    return 0;
}