#include <iostream>
using namespace std;

int main(void){
    int x = 10;
    int *ptr = &x;
    cout << "Value of x : " << x << endl;
    cout << "Pointer : " << *ptr << endl;
    cout << "Address of ptr " << &ptr << endl;
    return 0;
}