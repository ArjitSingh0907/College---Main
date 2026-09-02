#include <iostream>
#include <stack>
using namespace std;

int main(void){
    stack <int> s1, s2;
    s1.push(30);
    s2.push(40);
    
    cout << "Before swapping ->" << endl;
    cout << "Stack 1 : " << s1.top() << endl;
    cout << "Stack 2 : " << s2.top() << endl;

    s2.swap(s1);
    cout << "After swapping -> " << endl;
    cout << "Stack 1 : " << s1.top() << endl;
    cout << "Stack 2 : " << s2.top() << endl;
}