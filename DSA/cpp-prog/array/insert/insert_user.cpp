#include <iostream>
using namespace std;

int main(void){
    int pos, element;
    int size = 7;
    int arr[8] = {1, 2, 3, 4, 5, 6, 7};

    cout << "Initial array -> " << endl;
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter element : ";
    cin >> element;
    cout << "Enter position : ";
    cin >> pos;
    
    for (int j = size ; j > pos ; j--){
        arr[j] = arr[j - 1];
    }
    arr[pos] = element;
    size++;
    cout << "Updated array -> " << endl;
    for (int x = 0 ; x < size ; x++){
        cout << arr[x] << " ";
    }
    cout << endl;
    return 0;
}