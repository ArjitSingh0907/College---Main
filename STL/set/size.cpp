#include <iostream>
#include <set>
using namespace std;

int main(void){
    set <int> s = {1, 2, 3, 4, 5, 6, 7, 9, 10, 8};
    cout << "Size of set -> " << s.size() << endl;
    cout << "Empty stutus -> " << (s.empty() ? "Yes" : "No") << endl;

    s.clear();
    cout << "Size of set -> " << s.size() << endl;
    cout << "Empty stutus -> " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}