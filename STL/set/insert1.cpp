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

    cout << "Elements of set are -> " << endl;
    for (auto &it : s){
        cout << it << " ";
    }
    return 0;
}