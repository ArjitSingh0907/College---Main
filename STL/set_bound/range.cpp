#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50, 60};

    int low, high;
    cout << "Enter lower and upper limits: ";
    cin >> low >> high;
    auto start = s.lower_bound(low);
    auto end = s.upper_bound(high);

    cout << "Elements between " << low << " and " << high << " are: ";
    for(auto it = start; it != end; ++it){
        cout << *it << " ";
    }
    cout << endl;
}
