#include <iostream>
using namespace std;

int main(void){
    int num = 100;
    int *ptr;
    ptr = &num;
    cout << "variable : " << num << endl;
    cout << "pointer : " << ptr << endl;
    cout << "pointer address : " << &ptr << endl;
    return 0;
}