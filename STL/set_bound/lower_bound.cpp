#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 3, 5, 7, 9};

    int key = 1;
    auto it = s.lower_bound(key);
    if(it != s.end())
        cout << "Lower bound of " << key << " is " << *it << endl;
    else
        cout << "No lower bound found." << endl;
}
