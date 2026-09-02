#include <iostream>
#include <set>
using namespace std;

int main(void){
    set <int> s = {1, 2, 3, 4, 5};
    int key = 4;
    auto it = s.find(key);
    if (it != s.end()){
        cout << "Element found in set..." << endl;
    } else {
        cout << "Element not found..." << endl;
    }
    return 0;
}