#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> a(7, 7);
    cout << "Before insert: ";
    for (const auto &it : a){
        cout << it << " ";
    }
    cout << endl;
    cout << "Triple Inserting 3 at index 3" << endl;
    a.insert(a.begin() + 3, 3, 3);
    cout << "After insert : ";
    for (const auto &it : a){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}