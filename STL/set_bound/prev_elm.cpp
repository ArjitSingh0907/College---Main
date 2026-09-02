#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {5, 10, 15, 20, 25};

    int key;
    cout << "Enter a number: ";
    cin >> key;

    auto it = s.lower_bound(key);
    if(it != s.end())
        cout << "Smallest element >= " << key << " is " << *it << endl;
    else
        cout << "No element greater than or equal to " << key << endl;
}
