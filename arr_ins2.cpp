#include <iostream>
using namespace std;

int main(void){
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << "The elements of the array are: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter element to insert into the array: ";
    int elm;
    cin >> elm;
    arr[n] = elm;
    n++;
    cout << "The elements of the array after insertion are: ";
    for (int j = 0 ; j < n ; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}