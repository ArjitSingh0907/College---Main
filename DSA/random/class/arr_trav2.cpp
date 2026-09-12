#include <iostream>
using namespace std;

int main(void){
    int elm;
    cout << "Enter the number of elements: ";
    cin >> elm;
    int arr[elm];
    cout << "Enter elements to insert into array : ";
    for (int i = 0 ; i < elm ; i++){
        cin >> arr[i];
    }
    cout << "The elements in the array are : ";
    for (int j = 0 ; j < elm ; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}