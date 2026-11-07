#include <iostream>
using namespace std;

int main(void){
    int num = 10;
    int *ptr = &num;
    cout << ptr << endl;

    ptr++; // pointer moves by sizeof(int) bytes...
    
    cout << ptr << endl;
    return 0;
}