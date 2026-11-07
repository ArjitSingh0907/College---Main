#include <iostream>
using namespace std;

int main(void){
    int arr[] = {0, 10, 20, 30};
    cout << "for pointer at index 0 -> " << endl;
    int *ptr = &arr[0];
    cout << *ptr << endl;

    ptr++;

    cout << *ptr << endl;

    cout << "for pointer at index 1 -> " << endl;
    int *ptr1 = &arr[1];
    cout << *ptr1 << endl;

    ptr1++;

    cout << *ptr1 << endl;

    cout << "for pointer at index 2 -> " << endl;
    int *ptr2 = &arr[2];
    cout << *ptr2 << endl;

    ptr2++;

    cout << *ptr2 << endl;

    cout << "for pointer at index 3 -> " << endl;
    int *ptr3 = &arr[3];
    cout << *ptr3 << endl;

    ptr3++;

    cout << *ptr3 << endl;

    return 0;
}