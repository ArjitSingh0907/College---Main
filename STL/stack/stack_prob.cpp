#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void){
    stack <string> s;
    s.push("Open File");
    s.push("Edit Line");
    s.push("Save File");
    s.push("Close File");
    s.push("Exit Program");

    cout << "Current top action : " << s.top() << endl;
    s.pop();
    s.pop();
    cout << "Popped out two elements..." << endl;
    cout << "New top action : " << s.top() << endl;
    if(s.empty()){
        cout << "empty stack." << endl;
        cout << "size of stack : " << s.size() << endl;
    } else {
        cout << "not empty." << endl;
        cout << "size of stack : " << s.size() << endl;
    }

    while(!s.empty()){
        cout << "Top element now : " << s.top() << endl;
        s.pop();
    } return 0;
}