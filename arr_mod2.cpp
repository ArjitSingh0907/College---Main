#include <iostream>
using namespace std;

int main(void){
    int arr[] = {2, 4, 6, 8, 10};
    int *ptr = arr + 1;

    *ptr = *ptr * 10;

    ptr = ptr + 2;
    *ptr = *(ptr - 1) + 5;
    *(ptr + 1) = *ptr * 2;

    cout << *ptr << endl;
    cout << ptr << endl;

    for (int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}