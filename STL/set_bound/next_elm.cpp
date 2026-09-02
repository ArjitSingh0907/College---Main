#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {2, 4, 6, 8, 10, 12};

    int key;
    cout << "Enter a number: ";
    cin >> key;
    auto it = s.upper_bound(key);

    if(it != s.end())
        cout << "Next greater element after " << key << " is " << *it << endl;
    else
        cout << "No greater element found." << endl;
}
