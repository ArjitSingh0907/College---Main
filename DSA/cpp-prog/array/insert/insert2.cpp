#include <iostream>
using namespace std;

int main(void){
    int size = 5;
    int key;
    int arr[6] = {2, 4, 6, 8, 10};
    int pos;

    cout << "Initial Array -> " << endl;
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter element to insert into : ";
    cin >> key;
    cout << "Enter position to insert to : ";
    cin >> pos;

    for (int j = size ; j > pos ; j--){
        arr[j] = arr[j - 1];
    }
    size++;
    arr[pos] = key;

    cout << "Updated array -> ";
    for (int x = 0 ; x < size ; x++){
        cout << arr[x] << " ";
    }
    cout << endl;
    return 0;
}