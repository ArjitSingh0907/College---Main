#include <iostream>
using namespace std;
 
int main(void){
    int arr[5];
    int size = sizeof(arr) / sizeof(int);

    cout << "Enter any 5 elements : ";
    for (int x = 0 ; x < size ; x++){
        cin >> arr[x];
    }

    cout << "Array elements : ";
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Size of array : " << size << endl;
    return 0;
}