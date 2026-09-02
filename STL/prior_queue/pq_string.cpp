#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main(void){
    priority_queue <string, vector <string>, greater <string>> q;
    q.push("Arjit");
    q.push("Ayesha");
    q.push("Tanya");
    q.push("Rhea");

    cout << "Initial list of students..." << endl;
    while(!q.empty()){
        cout << "Size before popping : " << q.size() << endl;
        cout << "Queue element : " << q.top() << endl;
        q.pop();
        cout << "Size after popping : " << q.size() << endl;
    } return 0;
}