#include <iostream>
using namespace std;

int main(void){
    int arr[] = {0, 1, 2, 3, 4, 5};
    int *ptr = arr;
    cout << *ptr << endl;
    ptr = ptr + 2;
    cout << *ptr << endl;
    return 0;
}