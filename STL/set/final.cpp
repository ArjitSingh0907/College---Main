#include <iostream>
#include <set>
using namespace std;

int main(void){
    set <int> s = {1, 2, 3, 3, 3, 4, 4, 5, 6, 7};
    int key;

    cout << "printing elements -> " << endl;
    for (auto ir : s){
        cout << ir << " ";
    }
    cout << endl;
    cout << "enter element to search : ";
    cin >> key;
    auto it = s.find(key);
    if (it != s.end()){
        cout << "element spotted..." << *it << endl;
        cout << "erasing the spotted number..." << endl;
        s.erase(key);
        cout << "erased..." << endl;
    } else {
        cout << "element not found..." << endl;
    }

    cout << "printing elements of set -> " << endl;
    for (auto is : s){
        cout << is << " ";
    }
    cout << endl;
    cout << "size of set -> " << s.size() << endl;
    cout << "empty status -> " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}