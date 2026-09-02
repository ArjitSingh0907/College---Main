#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(void){
    deque <string> d = {"task 1", "task 2", "task 3", "task 4", "task 5"};
    d.emplace_front("urgent task");
    d.push_back("low priority task");
    d.erase(d.begin() + 2);

    cout << "Size of deque : " << d.size() << endl;
    for (const auto &it : d){
        cout << it << " ";
    }
    cout << endl;

    for (auto it = d.rbegin() ; it != d.rend() ; it++ ){
        cout << *it << " ";
    }
    cout << endl;
    d.clear();
    cout << "Size after clear() function is used : " << d.size() << endl;
    return 0;
}