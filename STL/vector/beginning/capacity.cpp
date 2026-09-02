#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<int> v0;
    v0.push_back(1);
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    vector<int> v4;
    v4.push_back(10);
    v4.push_back(11);
    v4.push_back(12);
    v4.push_back(13);
    v4.push_back(14);

    cout << "Size of vector 0: " << v0.size() << endl;
    cout << "Capacity of vector 0: " << v0.capacity() << endl;
    cout << "Size of vector 1: " << v1.size() << endl;
    cout << "Capacity of vector 1: " << v1.capacity() << endl;
    cout << "Size of vector 2: " << v2.size() << endl;
    cout << "Capacity of vector 2: " << v2.capacity() << endl;
    cout << "Size of vector 3: " << v3.size() << endl;
    cout << "Capacity of vector 3: " << v3.capacity() << endl;
    cout << "Size of vector 4: " << v4.size() << endl;
    cout << "Capacity of vector 4: " << v4.capacity() << endl;
}