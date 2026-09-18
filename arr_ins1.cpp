#include <iostream>
using namespace std;

int main() {
    int arr[20] = {1, 2, 3, 4};
    int size = 4;
    int n, element;

    cout << "How many elements do you want to insert? ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter element: ";
        cin >> element;

        arr[size] = element;
        size++;
    }

    cout << "Updated array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}