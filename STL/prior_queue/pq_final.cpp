#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void){
    priority_queue <pair <int, string>> q;
    q.push({3, "Patient A"});
    q.push({5, "Patient B"});
    q.push({1, "Patient C"});
    q.push({4, "Patient D"});
    q.push({2, "Patient E"});

    while (!q.empty()){
        cout << q.top().first << " " << q.top().second << endl;
        q.pop();
    };

    q.push({3, "Patient A"});
    q.push({5, "Patient B"});
    q.push({1, "Patient C"});
    q.push({4, "Patient D"});
    q.push({2, "Patient E"});
    q.pop();
    q.pop();
    cout << "Served 2 patients..." << endl;
    cout << "Adding two new patients..." << endl;
    q.push({6, "Patient F"});
    q.push({2, "Patient G"});

    while (!q.empty()){
        cout << q.top().first << " " << q.top().second << endl;
        q.pop();
    } return 0;
}