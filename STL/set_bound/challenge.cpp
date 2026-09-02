#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> rolls = {10, 20, 30, 40, 50};

    int key;
    cout << "Enter a roll number: ";
    cin >> key;

    auto lb = rolls.lower_bound(key);
    auto ub = rolls.upper_bound(key);

    cout << "Lower bound (current or next smaller): ";
    
    if(lb != rolls.end()) cout << *lb << endl;
    else cout << "None" << endl;

    cout << "Upper bound (next greater): ";
    if(ub != rolls.end()) cout << *ub << endl;
    else cout << "None" << endl;
}
