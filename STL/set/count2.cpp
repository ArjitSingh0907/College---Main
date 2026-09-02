#include <iostream>
#include <set>
using namespace std;

int main(void){
    set <int> s;
    int element;

    s.insert(34);
    s.insert(23);
    s.emplace(12);
    s.emplace(7);
    s.insert(100);
    s.emplace(99);
    s.emplace(0);
    s.insert(-1);

    cout << "Enter element to be searched -> ";
    cin >> element;

    int key = element;
    if (s.count(key)){
        cout << "Element exists..." << endl;
    } else {
        cout << "Element does not exists..." << endl;
    }
    return 0;
}