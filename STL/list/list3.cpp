//using push_back(), emplace_back(), push_front(), emplace_front() functions
#include <iostream>
#include <list>
using namespace std;

int main(void){
    list <int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);
    ls.emplace_front(4);
    
    for (const auto &i : ls){
        cout << i << " ";
    }
    return 0;
}