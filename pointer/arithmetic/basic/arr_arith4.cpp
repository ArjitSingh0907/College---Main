#include <iostream>
using namespace std;

int main(void){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr = arr;
    ptr = ptr + 3;
    cout << *ptr << endl;

    ptr = ptr - 1;
    cout << *ptr << endl;

    cout << *(ptr + 2) << endl;
    cout << *ptr << endl;
    return 0;
}