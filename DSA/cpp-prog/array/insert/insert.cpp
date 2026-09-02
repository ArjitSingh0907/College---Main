#include <iostream>
using namespace std;

int main(void){
    int element;
    int pos;
    int arr[6] = {1, 20, 5, 78, 30};
    int size = 5;
    int capacity = sizeof(arr) / sizeof(arr[0]);

    cout << "Initial array ->" << endl;
    for (int x = 0 ; x < size ; x++){
        cout << arr[x] << " ";
    }
    cout << endl;

    cout << "Enter element to insert into : ";
    cin >> element;
    cout << "Enter it's position : ";
    cin >> pos;

    for (int i = size ; i > pos ; i--){
        arr[i] = arr[i - 1];
    } size++;
    arr[pos] = element;

    cout << "Updated array ->" << endl;
    for (int j = 0 ; j < size ; j++){
        cout << arr[j] << " "; 
    } 
    cout << endl;
    return 0;
}