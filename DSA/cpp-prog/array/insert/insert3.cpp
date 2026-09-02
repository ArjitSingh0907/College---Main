#include <iostream>
using namespace std;

int main(void){
    int pos, size = 5, key;
    int arr[6] = {11, 22, 33, 44, 55};
    cout << "Initial array -> " << endl;
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter element to insert : ";
    cin >> key;
    cout << "Enter position to insert into : ";
    cin >> pos;

    for (int j = size ; j > pos ; j--){
        arr[j] = arr[j - 1];
    }
    size++;
    arr[pos] = key;

    cout << "Updated array -> " << endl;
    for (int x = 0 ; x < size ; x++){
        cout << arr[x] << " ";
    }
    cout << endl;
    return 0;
}