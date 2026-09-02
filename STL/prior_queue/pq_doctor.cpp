#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main(void){
    priority_queue <pair <int, string>, vector <pair <int, string>>, greater <pair <int, string>>> q;
    q.push({3, "Submit assignment."});
    q.push({1, "Pay bills."});
    q.push({5, "Prepare presentations."});
    q.push({2, "Doctor appointment."});
    q.push({4, "Team meeting."});

    while(!q.empty()){
        cout << "queue : " << q.top().first << " & " << q.top().second << endl;
        q.pop();
    }

    q.push({3, "Submit assignment."});
    q.push({1, "Pay bills."});
    q.push({5, "Prepare presentations."});
    q.push({2, "Doctor appointment."});
    q.push({4, "Team meeting."});
    
    q.pop();
    q.pop();
    cout << "Two tasks completed..." << endl;
    q.push({6, "Buy groceries."});
    q.push({0, "Morning workout."});

    while(!q.empty()){
        cout << "queue : " << q.top().first << " & " << q.top().second << endl;
        q.pop();
    }
    return 0;
}