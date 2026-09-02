#include <iostream>
using namespace std;
 
int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    cout << "Array elements : ";
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Size of array : " << size << endl;
    return 0;
}