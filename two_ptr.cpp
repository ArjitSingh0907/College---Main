#include <iostream>
using namespace std;

int main(void){
    int num = 100;
    int *ptr1 = &num;
    int *ptr2 = &num;

    cout << "Value of num: " << num << endl;
    cout << "Value pointed to by ptr1: " << *ptr1 << endl;
    cout << "Value pointed to by ptr2: " << *ptr2 << endl;

    *ptr2 = 150;

    cout << "After changing value through ptr2:" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Value of ptr1: " << *ptr1 << endl;
    cout << "Value of ptr2: " << *ptr2 << endl;
    
    return 0;
}