#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(void){
    priority_queue <pair <int, string>> q;
    q.push({3, "Low"});
    q.push({10, "High"});
    q.push({5, "Medium"});

    while(!q.empty()){
        cout << "queue : " << q.top().first << " & " << q.top().second << endl;
        q.pop();
    } return 0;
}