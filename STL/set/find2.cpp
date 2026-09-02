#include <iostream>
#include <set>
using namespace std;

int main(void){
    set <int> s = {1, 6, 3, 9, 5, 7};
    int key;
    cout << "Take a wild guess between 1 to 10 : ";
    cin >> key;

    auto it = s.find(key);
    if (it != s.end()){
        cout << "Element found in set..." << endl;
    } else {
        cout << "Element not found..." << endl;
    }
    return 0;
}