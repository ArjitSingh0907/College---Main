#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {2, 4, 6, 8, 10};
    int key = 3;
    auto lb = s.lower_bound(key);
    auto ub = s.upper_bound(key);

    cout << "Lower bound of " << key << " is " << (lb != s.end() ? to_string(*lb) : "None") << endl;
    cout << "Upper bound of " << key << " is " << (ub != s.end() ? to_string(*ub) : "None") << endl;
}
