#include <iostream>
using namespace std;

int main(void){
    int arr[100];
    int size;
    for (int i = 0 ; i < 100 ; i++){
        arr[i] = -1;
    }
    cout << "total elements to insert: ";
    cin >> size;
    cout << "Enter the elements: ";
    for (int j = 0 ; j < size ; j++){
        cin >> arr[j];
    }
    cout << "elements after insertion: ";
    for (int k = 0 ; k < size ; k++){
        cout << arr[k] << " ";
    }
    cout << endl;
    return 0;
}