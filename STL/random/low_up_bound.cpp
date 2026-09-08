#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
    set<int> s = {5,10,15,20,25,30};

    int low = 10, high = 25;
    auto start = s.lower_bound(low);
    auto end = s.upper_bound(high);

    cout << "Elements between " << low << " and " << high << ": ";
    for(auto it = start; it != end; ++it){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
