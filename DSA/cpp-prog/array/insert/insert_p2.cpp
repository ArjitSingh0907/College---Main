#include <iostream>
using namespace std;

int main(void){
    int size = 5;
    int element;
    int arr[6] = {1, 2, 3, 4, 5};

    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter element to insert : ";
    cin >> element;
    size++;
    arr[size - 1] = element;

    cout << "Updated array ->" << endl;
    for (int j = 0 ; j < size ; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}