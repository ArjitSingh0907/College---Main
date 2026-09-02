#include <iostream>
#include <deque>
using namespace std;

int main(void){
    deque <int> d = {1, 2, 3, 4, 5};
    d.pop_back();
    for (const auto &it : d){
        cout << it << " ";
    }
    cout << endl;

    d.pop_front();
    for (const auto &it : d){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}