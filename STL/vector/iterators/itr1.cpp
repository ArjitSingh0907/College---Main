#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> v = {1, 2, 3, 4, 5};
    cout << "Vector Begin : " << *v.begin() << endl;
    cout << "Vector End : " << *(v.end() - 1) << endl;
    return 0;
}