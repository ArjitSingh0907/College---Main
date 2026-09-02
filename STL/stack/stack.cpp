#include <iostream>
#include <stack>
using namespace std;

int main(void){
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.emplace(40);
    s.emplace(50);

    cout << "Top element of stack is : " << s.top() << endl;
    return 0;
}