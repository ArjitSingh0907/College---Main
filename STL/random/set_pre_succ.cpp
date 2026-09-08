#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10,20,30,40,50};

    int key = 30;
    auto lb = s.lower_bound(key);
    auto ub = s.upper_bound(key);

    if(lb != s.begin())
        cout << "Predecessor: " << *prev(lb) << endl;
    else
        cout << "No predecessor." << endl;

    if(ub != s.end())
        cout << "Successor: " << *ub << endl;
    else
        cout << "No successor." << endl;
    return 0;
}