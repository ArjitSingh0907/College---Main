#include <iostream>
#include <list>
using namespace std;

int main(void){
    list <int> ls = {1, 2, 3, 4, 5};
    ls.emplace_back(3);
    ls.emplace_front(2);
    ls.push_back(10);
    ls.push_front(20);

    for (const auto &it : ls){
        cout << it << " ";
    }
    cout << endl;
    cout << "now popping an element from back" << endl;

    ls.pop_back();
    for (const auto &it : ls){
        cout << it << " ";
    }
    cout << endl;
    cout << "now popping an element from front" << endl;

    ls.pop_front();
    for (const auto &it : ls){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}