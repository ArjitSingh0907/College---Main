#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};
    int key = 50;
    auto lb = s.lower_bound(key);
    auto ub = s.upper_bound(key);

    if(lb == s.end()) cout << "Lower bound not found (key > all elements)." << endl;
    if(ub == s.end()) cout << "Upper bound not found (key > all elements)." << endl;
}
