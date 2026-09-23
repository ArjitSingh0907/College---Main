#include <iostream>
using namespace std;

int main(void){
    int num = 50;
    int *ptr = &num;

    *ptr = 100;

    cout << "Updated value: " << num << endl;
    return 0;
}