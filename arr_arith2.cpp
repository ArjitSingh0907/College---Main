#include <iostream>
using namespace std;

int main(void){
    int arr[] = {0, 10, 20, 30};
    int *ptr = &arr[1];
    cout << *ptr << endl;

    ptr++;

    cout << *ptr << endl;
    return 0;
}