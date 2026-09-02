#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 3, 5, 7, 9};

    int key = 4;
    auto it = s.upper_bound(key);

    if(it != s.end())
        cout << "Upper bound of " << key << " is " << *it << endl;
    else
        cout << "No upper bound found." << endl;
}