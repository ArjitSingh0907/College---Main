#include <iostream>
using namespace std;

int main(void){
    int num = 25;
    int *ptr = &num;
    cout << "Before changing : " << num << endl;
    *ptr = 100;
    cout << "After changing : " << num << endl;
    return 0;
}