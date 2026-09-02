#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {2, 4, 6, 8, 10};
    for(int key : {1, 4, 5, 10, 12}){
        auto lb = s.lower_bound(key);
        auto ub = s.upper_bound(key);

        cout << "Key: " << key << " -> ";
        cout << "Lower bound: " << (lb != s.end() ? to_string(*lb) : "None") << ", ";
        cout << "Upper bound: " << (ub != s.end() ? to_string(*ub) : "None") << endl;
    }
}
