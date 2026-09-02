#include <iostream>
#include <deque>
using namespace std;

int main(void){
    deque <int> d = {1, 2, 3};
    d.emplace_front(10);
    d.emplace_back(11);
    d.push_front(20);
    d.push_back(12);

    for (const auto &it : d){
        cout << it << " ";
    }
    cout << endl;
}