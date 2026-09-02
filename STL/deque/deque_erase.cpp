#include <iostream>
#include <deque>
using namespace std;

int main(void){
    deque <int> d = {1, 2, 3, 4, 5};
    d.erase(d.begin() + 2);
    for (int x : d){
        cout << x << " ";
    }
    cout << endl;
    d.erase(d.begin(), d.begin() + 3);
    for (int x : d){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}