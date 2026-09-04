#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {5, 10, 15, 20, 25};

    int key;
    cout << "Enter a number: ";
    cin >> key;

    auto lb = s.lower_bound(key);   // first element >= key
    auto ub = s.upper_bound(key);   // first element > key

    // Predecessor (element just before lb)
    if(lb != s.begin())
        cout << "Predecessor of " << key << " is " << *prev(lb) << endl;
    else
        cout << "No predecessor (key is smallest)." << endl;

    // Successor
    if(ub != s.end())
        cout << "Successor of " << key << " is " << *ub << endl;
    else
        cout << "No successor (key is largest)." << endl;
    return 0;
}