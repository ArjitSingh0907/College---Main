#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50};

    int low = 15, high = 45;
    int key;
    cout << "Enter a number: ";
    cin >> key;

    auto start = s.lower_bound(low);   // first element >= low
    auto end = s.upper_bound(high);    // first element > high

    bool inside = false;
    for(auto it = start; it != end; ++it){
        if(*it == key){
            inside = true;
            break;
        }
    }

    if(inside)
        cout << key << " lies inside the range [" << low << ", " << high << "]" << endl;
    else
        cout << key << " is outside the range." << endl;
    return 0;
}