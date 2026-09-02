//checking size of a vector
#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<int> v0;
    vector<int> v1;
    vector<int> v2 = {1, 2, 3};
    vector<int> v3;
    vector<int> v4(2, 6);
    v3.push_back(10);
    v1.push_back(1);
    cout << "Size of vector 0: " << v0.size() << endl;
    cout << "Size of vector 1: " << v1.size() << endl;
    cout << "Size of vector 2: " << v2.size() << endl;
    cout << "Size of vector 3: " << v3.size() << endl;
    cout << "Size of vector 4: " << v4.size() << endl;
    return 0;
}