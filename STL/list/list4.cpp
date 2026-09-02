//using pop_front() and pop_back() functions
#include <iostream>
#include <list>
using namespace std;

int main(void){
    list <int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);
    ls.emplace_front(4);
    ls.pop_front(); // removes 4 from front...
    ls.pop_back(); // removes 2 from back...
    
    for (const auto &i : ls){
        cout << i << " ";
    }
    return 0;
}