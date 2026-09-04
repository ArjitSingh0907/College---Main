#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main() {
    set<int> s = {2, 5, 8, 12, 20};

    int key;
    cout << "Enter a number: ";
    cin >> key;

    auto lb = s.lower_bound(key);   // first element >= key
    auto ub = s.upper_bound(key);   // first element > key

    int closest;
    if(lb == s.end()) {
        // key is larger than all elements
        closest = *prev(s.end());
    } else if(lb == s.begin()) {
        // key is smaller than all elements
        closest = *lb;
    } else {
        // compare lower_bound and the element just before it
        int lower = *lb;
        int prevElem = *prev(lb);
        closest = (abs(key - prevElem) <= abs(lower - key)) ? prevElem : lower;
    }

    cout << "Closest element to " << key << " is " << closest << endl;
    return 0;
}