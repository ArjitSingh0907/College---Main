#include <iostream>
#include <queue>
using namespace std;

int main(void){
    priority_queue <int> q;
    q.push(3);
    q.push(20);
    q.push(1);
    q.push(32);
    q.push(15);

    while(!q.empty()){
        cout << "queue : " << q.top() << endl;
        q.pop();
    } return 0;
}