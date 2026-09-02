#include <iostream>
#include <set>
using namespace std;

int main(void){
    set <int> s;
    s.insert(34);
    s.insert(23);
    s.emplace(12);
    s.emplace(7);
    s.insert(100);
    s.emplace(99);
    s.emplace(0);
    s.insert(-1);

    cout << "Checking for an element in set..." << endl;
    int key = 100;
    if (s.count(key)){
        cout << "Element exists..." << endl;
    } else {
        cout << "Element does not exist..." << endl;
    }
    return 0;
}