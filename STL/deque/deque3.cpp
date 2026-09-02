#include <iostream>
#include <deque>
using namespace std;

int main(void){
    deque <int> d = {1, 2, 3, 4, 5};
    cout << "Back element : " << d.back() << endl;
    cout << "Front element : " << d.front() << endl;
    cout << "Adding temporary elements to perform action" << endl;
    d.emplace_front(30);
    d.push_back(40);
    for (const auto &it : d){
        cout << it << " ";
    }
    cout << endl;
    cout << "Now changing first and last element" << endl;
    d.front() = 50;
    d.back() = 60;
    for (const auto &it : d){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}