#include <iostream>
#include <stack>
using namespace std;

int main(void){
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Size of the stack (intially): " << s.size() << endl;
    while(!s.empty()){
        cout << "Stack top element : " << s.top() << endl;
        cout << "Stack size : " << s.size() << endl;
        s.pop();
    } return 0;
}