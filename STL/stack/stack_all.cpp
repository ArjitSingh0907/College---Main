#include <iostream>
#include <stack>
using namespace std;

int main(void){
    stack <int> s;
    s.emplace(66);
    s.emplace(84);
    s.emplace(92);
    s.emplace(132);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    } return 0;
}