#include <iostream>
#include <set>
using namespace std;

int main(void){
    set <int> s = {1, 2, 3, 4, 5, 6, 7, 9, 10, 8};
    int key = 7;
    cout << "elements of set -> " << endl;
    for (auto &ir : s){
        cout << ir << " ";
    }
    cout << endl;
    auto it = s.find(key);
    if (it != s.end()){
        cout << "Element spotted -> " << *it << endl;
    } else {
        cout << "Element not found..." << endl;
    }
    return 0;
}