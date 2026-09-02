#include <iostream>
using namespace std;

int main(void){
    int size = 5, element;
    int arr[8] = {1, 2, 3, 4, 5};
    cout << "Enter element to insert : ";
    cin >> element;

    for(int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (int j = size ; j > 0 ; j--){
        arr[j] = arr[j - 1];
    }
    size++;
    arr[0] = element;

    cout << "Updated array -> " << endl;
    for (int x = 0 ; x < size ; x++){
        cout << arr[x] << " ";
    }
    cout << endl;
    return 0;
}