//print variable using pointer
#include <iostream>
using namespace std;

int main(void){
    int num = 100;
    int *ptr = &num;
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << *ptr << endl;
    cout << "Address of ptr: " << ptr << endl;
    return 0;
}