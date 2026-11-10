//allocating a single integer on heap
#include <iostream>
using namespace std;

int main(void){
    int *p = new int;
    *p = 40;
    cout << *p << endl;
    delete p;
    p = nullptr;
    return 0;
}