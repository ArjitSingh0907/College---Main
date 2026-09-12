#include <iostream>
using namespace std;

int main(void){
    int arr[10] = {1, 2, 3, 4, 5};
    int elm;
    cout << "The elements are: ";
    for (int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter element to insert: ";
    cin >> elm;
    arr[5] = elm;
    cout << "The elements are: ";
    for (int j = 0 ; j < 6 ; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}