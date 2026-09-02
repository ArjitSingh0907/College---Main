#include <iostream>
#include <queue>
using namespace std;

int main(void){
    priority_queue <int> q;
    q.push(100);
    q.push(50);
    q.push(200);

    cout << "Size of the queue : " << q.size() << endl;
    while(!q.empty()){
        cout << "Queue element : " << q.top() << endl;
        q.pop();
    }
    if (!q.empty()){
        cout << "Queue is not empty." << endl;
        return 1;
    } else {
        cout << "Queue is empty." << endl;
        return 0;
    }
}