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

    cout << "Elements of set before erasing..." << endl;
    for (auto &it : s){
        cout << it << " ";
    }
    cout << endl;
    cout << "size -> " << s.size() << endl;

    s.erase(100);
    s.erase(0);
    s.erase(-1);
    s.erase(99);cout << "Elements of set before erasing..." << endl;
    for (auto &ir : s){
        cout << ir << " ";
    }
    cout << endl;
    cout << "Elements of set after erasing..." << endl;
    cout << "size -> " << s.size() << endl;
    return 0;
}