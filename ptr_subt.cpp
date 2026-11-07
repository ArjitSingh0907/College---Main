#include <iostream>
using namespace std;

int main(void){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[1];
    int *ptr2 = &arr[4];
    cout << "ptr1 - ptr2 = " << ptr1 - ptr2 << endl;
    cout << "ptr2 - ptr1 = " << ptr2 - ptr1 << endl;
    return 0;
}