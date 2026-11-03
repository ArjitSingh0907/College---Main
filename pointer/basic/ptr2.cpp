//print variable using pointer
#include <iostream>
using namespace std;

int main(void){
    int num = 100;
    int *ptr = &num;
    cout << "Value of num is : " << num << endl;
    cout << "Address of num is : " << &num << endl;
    return 0;
}
