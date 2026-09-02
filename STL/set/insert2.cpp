#include <iostream>
#include <set>
using namespace std;

int main(void){
    set <int> s;
    s.insert(34);
    s.insert(23);
    s.emplace(23);
    s.emplace(7);
    s.insert(99);
    s.emplace(99);
    s.emplace(0);
    s.insert(0);

    cout << "Elements of set are -> " << endl;
    for (auto &it : s){
        cout << it << " ";
    }
    return 0;
}