#include <iostream>
using namespace std;

int main(void){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr = arr;

    cout << *ptr << endl;

    ptr = ptr + 3;

    cout << *ptr << endl;

    *ptr = 99;
    cout << *ptr << endl;
    *(ptr + 1) = 100;
    cout << *(ptr + 1) << endl;
    *(ptr - 1) = 98;
    cout << *(ptr - 1) << endl;
    cout << "----------------" << endl;
    for (int i = 0 ; i < sizeof(arr) / sizeof(arr[0]) ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}